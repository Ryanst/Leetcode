/*
https://leetcode.com/problems/remove-duplicates-from-sorted-array/
 * Given a sorted array, remove the duplicates in place such that each element appear only once and return the new length.

Do not allocate extra space for another array, you must do this in place with constant memory.

For example,
Given input array A = [1,1,2],

Your function should return length = 2, and A is now [1,2].
*/
#include <iostream>
using namespace std;

int removeDuplicates(int A[], int n)
{
	int count = 0;
	for(int i = 1;i < n;i++)
	{
		if(A[i] == A[i-1])
			count++;
		else
			A[i-count] = A[i];
	}
	return n-count;
}

int removeDuplicates2(int A[], int n){
	if(NULL == A || 0 == n) return 0;
	int cur = 1;
	for(int i=1; i<n; i++)
	{
		if(A[i-1] != A[i])
			A[cur++] = A[i];
	}
	return cur;
}
