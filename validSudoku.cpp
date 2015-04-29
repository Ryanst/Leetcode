#include <iostream>
#include <vector>
using namespace std;

bool isValidSudoku(vector<vector<char> > &board)
{
	for(int row = 0;row < 9;row++)
	{
		for(int col = 0;col < 9;col++)
		{
			if(board[row][col] == '.')
				continue;

			for(int i = 0;i < 9;i++)//按行
			{
				if(i == col)
					continue;
				else if(board[row][col] == board[row][i])
					return false;
			}

			for(int i = 0;i < 9;i++)//按列
			{
				if(i == row)
					continue;
				else if(board[row][col] == board[i][col])
					return false;
			}
			int baseRow = row / 3 * 3;
			int baseCol = col / 3 * 3;
			for(int r = baseRow;r < baseRow+3;r++)
			{
				for(int c = baseCol;c < baseCol+3;c++)
				{
					if(r == row && c == col)
						continue;
					else if(board[row][col] == board[r][c])
						return false;
				}
			}
		}
	}
	return true;
}
