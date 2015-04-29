#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> twoSum(vector<int> &numbers, int target)
{
	vector<int> index;
	vector<int> num(numbers);
	sort(num.begin(),num.end());
	int head = 0,tail = num.size()-1;
	while(1)
	{
		if(num.at(head) + num.at(tail) > target)
			tail--;
		else if(num.at(head) + num.at(tail) < target)
			head++;
		else
			break;
	}
	int min = num[head];
	int max = num[tail];
	for(size_t i = 0;i < num.size();i++)
	{
		int tagmin = 0,tagmax = 0;
		if(!tagmin && (numbers[i] == min))
		{
			index.push_back(i+1);
			tagmin = 1;
			continue;
		}
		if(!tagmax && (numbers[i] == max))
		{
			index.push_back(i+1);
			tagmax = 1;
			continue;
		}
		if(tagmax && tagmin)
			break;
	}
	return index;
}

int main()
{
	int in[5] = {-1,-2,-3,-4,-5};
	vector<int> vec(in,in+5);
	vector<int> index = twoSum(vec,-8);
	cout <<index[0] <<index[1];
}

















