#include "forward.h"

// O(n)
int findShortestSubArray(std::vector<int>& nums) {

	std::unordered_map<int, std::vector<int>> table;    

	for (int i = 0; i < nums.size(); ++i) {
		table[nums[i]].push_back(i);
	}

	int degree = 0;
	for (const auto& ele : table) {
		degree = std::max(degree, (int)ele.second.size());
	}

	int min_length = nums.size();
	for (const auto& ele : table) {
		if (ele.second.size() == degree) {
			min_length = std::min(min_length, ele.second.back() - ele.second[0] + 1);
		}
	}
	return min_length;
}

// 0(NLogN)
int findShortestSubArray2(std::vector<int>& nums)
{
	std::map<int, Item> elms;
	int max_frequency = 1;
	int elm_max_frequency = -1;
	for (auto i = 0; i < nums.size();i++) {
		auto iterator = elms.find(nums[i]);
		if (iterator == elms.end()) {
			Item elm;
			elm._index_start = i;
			elm._index_end = i;
			elm ._frequency = 1;
			elms.insert(std::make_pair(nums[i], elm));
			
		}
		else
		{
			iterator->second._frequency++;
			iterator->second._index_end = i;;

			if (max_frequency < iterator->second._frequency) {
				elm_max_frequency = nums[i];
				max_frequency++;
			}
		}
	}
	int min = INT_MAX;
	for (auto& elm  : elms) {
		if (elm.second._frequency == max_frequency) {
			if (min > (elm.second._index_end - elm.second._index_start + 1)){
				min = elm.second._index_end - elm.second._index_start + 1;
			}
		}
	}
	return min;
}