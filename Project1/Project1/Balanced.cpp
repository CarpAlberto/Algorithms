#include "forward.h"

/// /// <summary>
/// Balanced Brackets c++ implementation
/// </summary>
/// 
/// 

std::map<char, char> mapTokens= { {'{','}'},{ '[',']' },{ '(',')' } };

bool isBalanced(std::string expression) {
	std::stack<char> _stack;
	for (auto ch : expression) {
		auto iterator = mapTokens.find(ch);
		if (iterator != mapTokens.end()) {
			_stack.push(iterator->first);
		}
		else 
		{
			// Closed Term
			if (_stack.empty())
				return false;
			// Get the open Term
			char top = _stack.top();
			auto iterator = mapTokens.find(top);
			if (iterator == mapTokens.end() || iterator->second != ch)
				return false;
			_stack.pop();
		}
	}
	return _stack.empty();
}