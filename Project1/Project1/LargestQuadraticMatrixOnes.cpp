/// <summary>
/// 1 1 0 0 1
/// 1 0 1 1 1
/// 1 1 1 1 1
/// 1 0 1 0 0  ==> 2
/// </summary>
/// 
/// 
#include "forward.h"



int ComputeLargestQuadratic(matrixInt _matrix)
{
	auto Cache = _matrix;
	int _max = 0;
	if (_matrix.size() == 0)
		return 0;
	for (int i = 0; i < Cache.size(); i++) {
		for (int j = 0; j < Cache[0].size(); j++) {
			if (i != 0 && j != 0 && _matrix[i][j] != 0)
			{
				int value = std::min(Cache[i - 1][j], Cache[i - 1][j - 1]);
				Cache[i][j] =  1 + std::min(value,Cache[i] [j - 1]);
			}
			if (Cache[i][j] > _max)
				_max = Cache[i][j];
		}
	}
	return _max;
}