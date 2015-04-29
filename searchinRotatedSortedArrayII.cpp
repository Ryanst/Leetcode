#include <iostream>
using namespace std;

bool binarySearch(int A[],int begin,int end,int target)
{
	if(begin > end)	return false;

	if(begin == end)
	{
		if(A[begin] == target)	return true;
		else return false;
	}
	else
	{
		int mid = (begin+end)/2;
		if(A[mid] > target)	return binarySearch(A,begin,mid,target);
		else if(A[mid] < target)	return binarySearch(A,mid+1,end,target);
		else return true;
	}
}


bool search(int A[], int n, int target)
{
	if(n == 0)	return false;

	if(target == A[0])
		return true;
	else
	{
		int i = 0;
		int low = 0,high = n-1;
		while(low<high)
		{
			int mid = (low+high)/2;
			if(A[mid] > A[high])	low = mid+1;
			else high = mid;
		}
		i = (low==0)?n:low;

		if(target > A[0])
			return binarySearch(A,1,i-1,target);
		else
			return binarySearch(A,i,n-1,target);
	}
}

int main()
{
	int A[] = {0,1,2};
	int target;
	while(cin >>target)
		cout << search(A,3,target) <<endl;
}

