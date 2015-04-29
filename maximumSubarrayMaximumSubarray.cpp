#include <iostream>
#include <vector>
using namespace std;

int maxSubArray(vector<int>& nums)
{
	if(nums.empty())	return 0;
	int maxSum = nums[0];
	int temSum = 0;
	for(int i = 0;i < nums.size();i++)
	{
		temSum += nums[i];
		if(temSum > maxSum)			maxSum = temSum;
		if(temSum < 0)				temSum = 0;
	}
	return maxSum;
}
