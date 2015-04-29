#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int threeSumClosest(vector<int> &num, int target)
{
	int minGap = INT_MAX;
	int gap = INT_MAX;
	int sum;
	sort(num.begin(),num.end());
	for(int i = 0;i < num.size()-2;i++)
	{
		int begin = i+1;
		int end = num.size()-1;

		while(begin < end)
		{
			gap = num[i] + num[begin] + num[end] - target;

			if(gap == 0)
				return target;	
		
			if(abs(gap) < minGap)
			{
				minGap = abs(gap);
				sum = num[i] + num[begin] + num[end];
			}

			if(gap < 0)
				begin++;
			else
				end--;
		}
	}
	return sum;
}

int main()
{
	int A[] = {0,1,2};
	vector<int> vec(A,A+3);
	cout <<threeSumClosest(vec,0);
}
