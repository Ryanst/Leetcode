#include <iostream>
using namespace std;

int numTrees(int n)
{
	if(n == 0)
		return 0;
	int G[n+1];
	for(int x = 0;x <= n;x++)
		G[x] = 0;
	G[0] = 1;
	G[1] = 1;

	for(int i = 2;i <= n;i++)
	{
		for(int j = 1;j <= i;j++)
		{
			G[i] += (G[j-1] * G[i-j]);
		}
	}
	return G[n];
}

int main()
{
	cout << numTrees(4);
}