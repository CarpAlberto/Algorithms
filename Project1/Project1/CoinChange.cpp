//Given a value N, if we want to make change for N cents, 
//and we have infinite supply of each of S = { S1, S2, .. , Sm }
//valued coins, how many ways can we make the change ? The order of coins 
//doesn’t matter.
//
//For example, for N = 4 and S = { 1,2,3 }, there are four solutions :
// {1, 1, 1, 1}, { 1,1,2 }, { 2,2 }, { 1,3 }.
//So output should be 4. For N = 10 and S = { 2, 5, 3, 6 },
//there are five solutions : {2, 2, 2, 2, 2}, { 2,2,3,3 }, { 2,2,6 }, 
//{ 2,3,5 } and {5, 5}.So the output should be 5.
#include "forward.h"


long getWaysWrapper(vector < long >& c, long money,
	int index, map<string, long>& memory) {

	if (money == 0)
		return 1;
	if (index >= c.size())
		return 0;
	long amount = 0;
	long ways = 0;
	string key;
	key = std::to_string(money) + (string)"-" + std::to_string(index);

	auto iterator = memory.find(key);
	if (iterator != memory.end()) {
		return iterator->second;
	}
	while (amount <= money) {
		long remaining = money - amount;
		ways += getWaysWrapper(c, remaining, index + 1, memory);
		amount += c[index];
	}
	memory.insert(std::pair<string, long>(key, ways));
	return ways;
}
long getWays(vector < long > c, long money) {
	return getWaysWrapper(c, money, 0, *new map<string, long>);
}