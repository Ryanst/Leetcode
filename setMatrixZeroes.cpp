#include <iostream>
#include <vector>
using namespace std;

void setZeroes(vector<vector<int> > &matrix)
{
	int height = matrix.size();
	int width = matrix[0].size();
	int col0 = 1,row0 = 1;
	if(matrix[0][0] == 0)
	{
		col0 = 0;
		row0 = 0;
	}
	else
	{
		for(int i = 1;i < height;i++)
		{
			if(matrix[i][0] == 0)
			{
				col0 = 0;
				break;
			}
		}
		for(int j = 0;j < width;j++)
		{
			if(matrix[0][j] == 0)
			{
				row0 = 0;
				break;
			}
		}
	}
	for(int i = 1;i < height;i++)
	{
		for(int j = 1;j < width;j++)
		{
			if(matrix[i][j] == 0)
			{
				matrix[i][0] = 0;
				matrix[0][j] = 0;
			}
		}
	}
	for(int i = 1;i < height;i++)
	{
		for(int j = 1;j < width;j++)
		{
			if(matrix[i][0] == 0 || matrix[0][j] == 0)
				matrix[i][j] = 0;
		}
	}
	if(col0 == 0)
	{
		for(int i = 0;i < height;i++)
			matrix[i][0] = 0;
	}
	if(row0 == 0)
	{
		for(int j = 0;j < width;j++)
			matrix[0][j] = 0;
	}
}
