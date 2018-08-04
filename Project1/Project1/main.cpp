#include <iostream>
#include <vector>
#include "forward.h"


#define LONELY_INTEGER
#define QUEUE_TWO_STACKS
#define IS_BALANCED
#define PAIR_GIVEN_SUM
#define PATH_STAIRS
#define MAX_ONES_MATRIX
#define MAX_SUBARRAY_SUM
#define LENGTH_LONGEST_SUBSTRING
#define DEGREE_ARRAY
#define COUNT_BITS
#define GRAPH_DF

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

	#ifdef PAIR_GIVEN_SUM
		auto vSum = { 1,2,3,4,5,6 };
		bool pair = FindPairWithGivenSum(vSum, 6);
		if (pair)
			std::cout << "Found pair with given sum ";
		else
			std::cout << "Not Found pair with given sum ";
	#endif

	#ifdef PATH_STAIRS
		std::vector<int> hashtable;
		int steps = 10;
		hashtable.reserve(steps + 1);
		for (int i = 0; i <= steps + 1; i++)
			hashtable.push_back(0);
		int response = countPathsMemorization(steps, hashtable);
		std::cout << "Found the steps " <<  response;

	#endif

	#ifdef MAX_ONES_MATRIX
		matrixInt max = { 
			{ 1, 1, 0, 0, 1 },
			{ 1, 0, 1, 1, 1 },
			{ 1, 1, 1, 1, 1 },
			{ 1, 0, 1, 1, 1 }
		};
		int largest = ComputeLargestQuadratic(max);

		std::cout << "The largest quadratic matrix " << largest;
	#endif

	#ifdef MAX_SUBARRAY_SUM
		std::vector<int> l = { -2,1,-3,4,-1,2,1,-5,4 };
		long sum = maxSubArray(l);
	#endif

	#ifdef LENGTH_LONGEST_SUBSTRING
		int test = lengthOfLongestSubstring("abavbaa");
	#endif

	#ifdef DEGREE_ARRAY
		std::vector<int> array= { 1,2,2,3,1,4,2 };
		auto size = findShortestSubArray2(array);
		
		std::cout << "The size of the shortest array is: " << size << std::endl;

	#endif
	#ifdef COUNT_BITS
		int bits = CountBits(9);
		std::cout << "The bits number are " << bits << std::endl;
	#endif

	#ifdef GRAPH_DF
		BuildGraphDF();
	#endif
	system("pause");
}