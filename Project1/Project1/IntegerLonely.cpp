#include <iostream>
#include <vector>
/// <summary>
/// Given N numbers 
/// Knowing that N-1 numbers apears twice and only one number appears once,
/// find the number
/// 
/// </summary>
/// 

int FindTheLonelyInteger(std::vector<int> vIn)
{
	int result = 0;
	for (auto& item : vIn) {
		result ^= item;
	}
	return result;
}

