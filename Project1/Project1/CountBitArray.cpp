#include "forward.h"

// Given a number count the set bits from it
// Algorithm Brian...
int CountBits(int n) {
	
	int count = 0;
	while (n) {
		n = n & (n - 1);
		count += 1;
	}
	return count;
}