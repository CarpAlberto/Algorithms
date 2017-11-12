#pragma once
#include <stack>
#include <map>
#include <vector>
#include <string>
#include <unordered_set>
#include <algorithm>
#include <fstream>

using namespace std;

class Queue {
	std::stack<int> _stackOld;
	std::stack<int> _stackNew;

public:
	void enqueue(int value);
	int peek();
	int deque();
private:
	void shiftStacks();
};

struct Node {
	int _data;
	Node* _next;
};

class List {
	Node* _start;

public:
	void Add(int elm)
	{
		/*Stauff*/
	}

};

typedef std::vector<std::vector<int>> matrixInt;

bool isBalanced(std::string expression);
int FindTheLonelyInteger(std::vector<int> vIn);
bool FindPairWithGivenSum(std::vector<int> _array, int sum);
int countPathsMemorization(int steps, std::vector<int>& memory);
int ComputeLargestQuadratic(matrixInt _matrix);
long getWays(vector < long > c, long money);
int maxSubArray(vector<int>& nums);
int lengthOfLongestSubstring(string s);
int lps(char *seq, int i, int j);
