#include <iostream>
#include <vector>
using namespace std;

/*
You are given an n x n 2D matrix representing an image.

Rotate the image by 90 degrees (clockwise).

Follow up:
Could you do this in-place?
*/

/*
/*
https://leetcode.com/discuss/20589/a-common-method-to-rotate-the-image
先上下翻转，然后对称
 * clockwise rotate
 * first reverse up to down, then swap the symmetry 
 * 1 2 3     7 8 9     7 4 1
 * 4 5 6  => 4 5 6  => 8 5 2
 * 7 8 9     1 2 3     9 6 3
*/

void swap(int& a,int& b)
{
	a=a+b;
	b=a-b;
	a=a-b;
}

void rotate(vector<vector<int> > &matrix) 
{
	if(matrix.size() <= 1)	return;
	reverse(matrix.begin(),matrix.end());
	for(int i = 0;i < matrix.size();i++)
	{
		for(int j = i+1;j < matrix[i].size();j++)
			swap(matrix[i][j],matrix[j][i]);
	}
}

int main()
{
	return 0;
}
