/// <summary>
/// Find if an array contains a pair with given sum
/// </summary>
/// 
/// 
#include "forward.h"

bool FindPairWithGivenSum(std::vector<int> _array, int sum) {
	
	std::unordered_set<int> _set;

	for (auto& item : _array) {
		if (_set.find(item) != _set.end()) {
			_set.emplace(sum - item);
		}
		else
		{
			return true;
		}
	}
	return false;
}