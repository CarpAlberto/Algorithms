#include <iostream>
#include <vector>
#include "forward.h"


#define LONELY_INTEGER
#define QUEUE_TWO_STACKS
#define IS_BALANCED

int main()
{
	#ifdef LONELY_INTEGER
		std::vector<int> v = { 1,2,3,4,5,6,6,4,3,2,1};
		int result =  FindTheLonelyInteger(v);

		std::cout << "The lonely integer is " << result << std::endl;
	#endif

	#ifdef QUEUE_TWO_STACKS
		Queue q;
		q.enqueue(1);
		q.enqueue(2);
		q.enqueue(3);

		int value = q.peek();
		std::cout << "The peeked value is " << value << std::endl;

	#endif

	#ifdef IS_BALANCED
		std::string expression = "[({})()]";
		bool isB = isBalanced(expression);
		if (isB)
			std::cout << "Balanced ";
		else
			std::cout << "Not Balanced";
	#endif

	system("pause");
}