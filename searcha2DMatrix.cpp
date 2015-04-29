#include <iostream>
#include <vector>
using namespace std;

//把二维数组当成一维的已排序数组的方法，多了很多除和余的操作，复杂度log(m*n),这方法不算好
bool searchMatrix2(vector<vector<int> > &matrix, int target)
{
	if(matrix.empty())	return false;

	int heigth = matrix.size();
	int width = matrix[0].size();

	//小于最小或大于最大的无需二分，直接返回false
	if(matrix[0][0] > target || matrix[heigth-1][width-1] < target)	return false;	

	int head = 1;
	int tail = heigth*width; 
	int mid,midRow,midCol;
	/*
	另一种方式得到mid的行和列下标：
	int head = 0.tail = height*width-1;//head tail 分别表示首尾下标
	mid = (head+tail)/2;
	midCol = mid&width;
	midRow = mid/width;
	*/
	while(head <= tail)//小于的意义在于可以mid-1，等于的意义在于当head==tail时判断当前值是否等于target，这样在循环外就无需再判断了
	{
		mid = (head+tail)/2;
		midCol = (mid-1)%width;
		midRow = (mid-1)/width;
		if(matrix[midRow][midCol] < target)
			head = mid+1;
		else if(matrix[midRow][midCol] > target)
			tail = mid-1;
		else
			return true;
	}
	/*
	 *  因为while加了head==tail的条件，所以下面这段代码就省了
    	mid = head;
    	midCol = (mid-1)%width;
    	midRow = (mid-1)/width;
    
    	return	(matrix[midRow][midCol] == target);
	*/
	return false;
}

//最佳答案
//先列二分，然后再行二分，复杂度logm+logn=log(m*n)与1相同，但是少了乘和余的操作
bool searchMatrix(vector<vector<int> > &matrix,int target)
{
	if(matrix.empty())		return false;

	int heigth = matrix.size();
	int width = matrix[0].size();
	
	//小于最小或大于最大的无需二分，直接返回false
	if(matrix[0][0] > target || matrix[heigth-1][width-1] < target)		return false;

	int head = 0;
	int tail = heigth-1;
	int mid;
	while(head != tail && matrix[tail][0] > target)
	{
		mid = (head+tail+1)/2;
		if(matrix[mid][0] < target)		head = mid;
		else if(matrix[mid][0] > target)	tail = mid-1;	
		else 	return true;
	}
	int row = tail;
	head = 0,tail = width-1;
	while(head <= tail)
	{
		mid = (head+tail)/2;
		if(matrix[row][mid] < target)
			head = mid + 1;
		else if(matrix[row][mid] > target)
			tail = mid -1;
		else return true;
	}
	return false;
}































