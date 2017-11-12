#include "forward.h"

int countPathsR(int steps) {

	if (steps == 0)
		return 0;
	return countPathsR(steps - 1) + countPathsR(steps - 2) + countPathsR(steps - 3);
}

int countPathsMemorization(int steps, std::vector<int>& memory)
{
	if (steps < 0)
		return 0;
	if (steps == 0)
		return 1;
	if (memory[steps] == 0) {
		int response = countPathsMemorization(steps - 1, memory) + countPathsMemorization(steps - 2, memory) + 
			countPathsMemorization(steps - 3, memory);
		memory[steps] = response;
	}
	return memory[steps];
}