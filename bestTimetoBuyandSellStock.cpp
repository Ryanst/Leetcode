#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int>& prices)
{
	if(prices.size() <= 1)	return 0;
	int profit = 0;
	int min = prices[0];
	for(int i = 1;i < prices.size();i++)
	{
		if(prices[i] < min)
			min = prices[i];
		else
		{
			if(prices[i] - min > profit)
				profit = prices[i] - min;
		}
	}
	return profit;
}
