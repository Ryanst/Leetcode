#include <iostream>
#include <vector>
using namespace std;

void swap(vector<int>& num,int x,int y)
{
	int tem = num[x];
	num[x] = num[y];
	num[y] = tem;
}

void permutation(vector<vector<int> >& res, vector<int> num,int begin,int end)
{
	if(begin == end)	
		res.push_back(num);
	else
	{
		for(int i = begin;i <= end;i++)
		{
			swap(num,begin,i);
			permutation(res,num,begin+1,end);
			swap(num,begin,i);
		}
	}
}

vector<vector<int> > permute(vector<int> &num) 
{
	vector<vector<int> > res;
	permutation(res,num,0,num.size()-1);
	return res;
}
