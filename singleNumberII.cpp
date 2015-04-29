#include <iostream>
using namespace std;

/*
 *https://leetcode.com/problems/single-number-ii/
 *Given an array of integers, every element appears three times except for one. Find that single one.
 *
 *解题思路:
 *将所有int类型数据从bit角度看，按每个位来说，如果当前位出现1的数量是3的倍数，则当前位结果是0，若余1是1，则当前位结果是1
 *
When encount FIRST "1", set "ec1 = 1";
When encount SECOND "1", set "ec2 = 1";
When encount THIRD "1", set "ec3 = 1, ec1 = 0, ec2 = 0", and move on...
 *
 *
 * */

//最朴素的按位循环解法
int singleNumber(int A[], int n)
{
	int res = 0;
	int count[32] = {0};//32位int，int数组可以这样赋值
	for(int i = 0;i < 32;i++)
	{
		for(int j = 0;j < n;j++)
		{
			if((A[j] >> i) & 1)
				count[i]++;
		}
		res |= ((count[i] % 3) << i);
	}
	return res;
}

//比较好理解的简洁代码
int singleNumber2(int A[], int n)
{
	int ones = 0,twos = 0,threes = 0;
	for(int i = 0;i < n;i++)
	{
		threes = twos & A[i];
		twos = (twos | (ones&A[i])) & (~threes);
		ones = (ones&A[i]) & (~threes);
	}
	return ones;
}

int main()
{
	int A[] = {1,1,1,2,2,2,3,4,4,4};
	cout << singleNumber2(A,10);
}
