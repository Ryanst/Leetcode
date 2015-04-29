#include <iostream>
#include <vector>
using namespace std;


int max(int begin,int end,vector<int> prices)
{
	int max = prices[begin];
	for(int i = begin+1;i <= end;i++)
	{
		if(max < prices[i])
			max = prices[i];
	}
	return max;
}

int min(int begin,int end,vector<int>& prices)
{
	int min = prices[begin];
	for(int i = begin+1;i <= end;i++)
	{
		if(min > prices[i])
			min = prices[i];
	}
	return min;
}
int maxInt(int x,int y,int z)
{
	int max = x;
	if(y > max)	max = y;
	if(z > max) max = z;
	return max;
}

int maxPro(int begin,int end,vector<int>& prices)
{
	if(end-begin <= 1)	return 0;
	return maxInt( maxPro(begin,begin+(end-begin)/2,prices),maxPro(begin+(end-begin)/2+1,end,prices),max(begin+(end-begin)/2+1,end,prices)-min(begin,begin+(end-begin)/2,prices));
}


int maxProfit(vector<int>& prices) 
{
	return maxPro(0,prices.size(),prices);
}

int main()
{
	return 0;
}
