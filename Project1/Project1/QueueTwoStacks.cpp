#include <stack>
#include <iostream>
#include "forward.h"


/// <summary>
/// Implement a Queue using two stacks
/// </summary>


void Queue::enqueue(int value) {
	this->_stackNew.push(value);
}

int Queue::peek() {
	shiftStacks();
	return _stackOld.top();
}

int Queue::deque() {
	shiftStacks();
	int value = _stackOld.top();
	_stackOld.top();
	return value;
}

void Queue::shiftStacks() {
	if (_stackOld.empty()) {
		while (!_stackNew.empty()) {
			_stackOld.push(_stackNew.top());
			_stackNew.pop();
		}
	}
}