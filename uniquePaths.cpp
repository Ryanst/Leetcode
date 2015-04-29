#include <iostream>
using namespace std;

int uniquePaths(int m, int n)
{
	if(m <= 0 || n <= 0)	return 0;
	if(m == 1 || n == 1)	return 1;
	int A[m][n];
	for(int i = 0;i < m;i++)		A[i][0] = 1;
	for(int i = 1;i < n;i++)		A[0][i] = 1;

	for(int i = 1;i < m;i++)
	{
		for(int j = 1;j < n;j++)
		{
			A[i][j] = A[i-1][j] + A[i][j-1];
		}
	}
	return A[m-1][n-1];
}

//更好的方法，只需要O(n)的存储空间：

int uniquePaths2(int m, int n) {
	int[] arr = new int[m];
	for (int i = 0; i < m; i++) {
		arr[i] = 1;
	}
	for (int i = 1; i < n; i++) {
		for (int j = 1; j < m; j++) {
			arr[j] = arr[j] + arr[j-1];
		}
	}
	return arr[m-1];
}

int main()
{
	int m,n;
	while(cin >>m >>n)
		cout <<uniquePaths(m,n) <<endl;
}
