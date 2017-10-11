#include "forward.h"

/// <summary>
///  Detect Cycles in Lists
/// </summary>


bool HasCycle(Node* start) {
	if (start == nullptr)
		return false;
	Node * _fast = start;
	Node*  _slow = start;
	int max = 0;
	while (_fast->_next != nullptr && _slow != nullptr && max < 100)
	{
		if (_fast == _slow) {
			return true;
		}
		_fast = _fast->_next->_next;
		_slow = _slow->_next;
		max++;
	}
	return false;
}