#pragma once
#include <stack>
#include <map>

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

bool isBalanced(std::string expression);
int FindTheLonelyInteger(std::vector<int> vIn);
