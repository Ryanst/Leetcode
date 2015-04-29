#include <iostream>
#include <vector>
using namespace std;

int min(int a,int b)
{
	return a<b?a:b;
}

int minPathSum(vector<vector<int> > &grid)
{
	if(grid.empty())	return 0;
	int pathSum[grid[0].size()];
	int S = 0;
	for(int i = 0;i < grid[0].size();i++)
	{
		S += grid[0][i];
		pathSum[i] = S;
	}
	for(int i = 1;i < grid.size();i++)
	{
		pathSum[0] += grid[i][0];
		for(int j = 1;j < grid[i].size();j++)
		{
			pathSum[j] = min(pathSum[j-1],pathSum[j])+grid[i][j];
		}
	}
	return pathSum[grid[0].size()-1];
}

int main()
{
	return 0;
}

