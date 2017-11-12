#include "forward.h"
//		  -2  1  -2  4  3   5  6  1  4
//Input: [-2, 1, -3, 4, -1, 2, 1, -5, 4],
//Output : 6
//Explanation : [4, -1, 2, 1] has the largest sum = 6.

int maxSubArray(vector<int>& nums) {
	int ret = nums[0];
	for (int i = 1; i < nums.size(); i++) {
		nums[i] = max(nums[i], nums[i] + nums[i - 1]);
		ret = max(ret, nums[i]);
	}
	return ret;
}

