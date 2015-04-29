/*
https://leetcode.com/problems/house-robber/
You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed, the only constraint stopping you from robbing each of them is that adjacent houses have security system connected and it will automatically contact the police if two adjacent houses were broken into on the same night.

Given a list of non-negative integers representing the amount of money of each house, determine the maximum amount of money you can rob tonight without alerting the police.
*/
//一道简单的一维动态规划,用递归的方式会时间超

#include <iostream>
#include <vector>
using namespace std;

int max(int a,int b)
{
	return a>b?a:b;
}

int rob(vector<int> &num)
{
	int len = num.size();
	if(len == 0)
		return 0;
	if(len == 1)
		return num.at(0);
	if(len == 2)
		return max(num.at(0),num.at(1));
	if(len == 3)
		return max(num.at(0)+num.at(2),num.at(1));
	int robed[len];
	robed[0] = num.at(0);
	robed[1] = max(num.at(0),num.at(1));
	robed[2] =  max(num.at(0)+num.at(2),num.at(1));
	for(int i = 3;i < len;i++)
	{
		robed[i] = max(robed[i-3]+num[i-1],robed[i-2]+num[i]);
	}
	return robed[len-1];
}
//leetcode discuss的5行代码实现
int robleetcode(int a[], int n) {
    if (n == 0) return 0;
    if (n > 1 && a[0] > a[1]) a[1] = a[0];
    for (int i = 2; i < n; i++)
        a[i] = a[i]+a[i-2] > a[i-1] ? a[i]+a[i-2] : a[i-1];
    return a[n - 1];
}
int main()
{
	int intarr[4] = {2,4,6,8};
	vector<int> vec(intarr,intarr+4);
	cout <<rob(vec) <<endl;
}

