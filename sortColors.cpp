#include <iostream>
using namespace std;

void swap(int& a,int& b)
{
	a = a+b;
	b = a-b;
	a = a-b;
}

void sortColors(int A[], int n)
{
	int zero = 0,two = n-1;
	for(int i = 0;i <= two;i++)
	{
		while(two > i && A[i] == 2)
		{
			swap(A[i],A[two]);
			two--;
		}
		while(i > zero && A[i] == 0)
		{
			swap(A[zero],A[i]);
			zero++;
		}
	}
}
