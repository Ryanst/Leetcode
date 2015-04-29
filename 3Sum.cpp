#include <iostream>
#include <vector>
using namespace std;

vector<vector<int> > threeSum(vector<int> &num)
{
	vector<vector<int> > res;
	int sum = -1;
	if(num.size() < 3)
		return res;
	sort(num.begin(),num.end());
	if(num[0] > 0 || num[num.size()-1] < 0)
		return res;

	for(int i = 0;i < num.size()-2;i++)
	{
		if(num[i] > 0)
			break;

		int begin = i+1;
		int end = num.size()-1;

		while(begin < end)
		{
			if(num[i] + num[begin] > 0)
				break;

			sum = num[i] + num[begin] + num[end];
			if(sum == 0)
			{
				int number[] = {num[i],num[begin],num[end]};
				vector<int> col(number,number+3);
				res.push_back(col);

				while(begin < num.size()-2 && num[begin] == num[begin+1])
					begin++;
				begin++;
				
				while(end > 1 && num[end] == num[end-1])
					end--;
				end--;
			}
			else if(sum < 0)
			{
				while(begin < num.size()-2 && num[begin] == num[begin+1])
					begin++;
				begin++;
			}
			else
			{
				while(end > 1 && num[end] == num[end-1])
					end--;
				end--;
			}
		}
		while(i < num.size()-2 && num[i] == num[i+1])
			i++;
	}
	return res;
}
int main()
{
	int A[] = {1,-1,-1,-4,1,2,0};
	vector<int> vec(A,A+7);
	threeSum(vec);
}
