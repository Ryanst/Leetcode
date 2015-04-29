#include <iostream>
#include <vector>
using namespace std;
//其实这道题并不难，只是我用的是最笨的方法，稍微好一点，加几个判断，少一些相乘，就是最终的最优解法了
//其实问题的解决方法并不难，但是自己没有尽全力这是最主要的问题,另外只针对这个问题，其实最坏的复杂度似乎并没有提升，但是大幅缩短了平均复杂度，所以过了

int max(int a,int b)
{
	return a>b?a:b;
}

int maxArea(vector<int> &height)
{
	int res = 0;
	int begin = 0,end = height.size()-1;
	int  lowH;
	while(begin < end)
	{
		if(height[begin] < height[end])
		{
			lowH = height[begin];
			res = max(res,lowH*(height[begin]-height[end]));
			while(begin < end && height[begin] < lowH)
				begin++;
		}
		else
		{
			lowH = height[end];
			res =  max(res,lowH*(height[begin]-height[end]));
			while(begin < end && height[end] < lowH)
				end--;
		}
	}
	return res;
}


int maxArea2n(vector<int> &height)
{
	int maxA = 0;
	for(size_t i = 0;i < height.size()-1;i++)
	{
		for(size_t h = i+1;h < height.size();h++)
		{
			if((int)(h-i)*min(height[i],height[h]) > maxA)
				maxA = (h-i)*min(height[i],height[h]) ;
		}
	}
	return maxA;
}

int main()
{

}
