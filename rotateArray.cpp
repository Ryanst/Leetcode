#include <iostream>
using namespace std;


void rotate(int nums[], int n, int k)
{
	if (k > n)
        k %= n;
	int tmp[n];
	for(int i = 0;i < k;i++)
		tmp[i] = nums[i+n-k];
	for(int h = k;h < n;h++)
		tmp[h] = nums[h-k];
	for(int y = 0;y < n;y++)
		nums[y] = tmp[y];

}

int main()
{
	int nums[] = {1,2,3};
}






