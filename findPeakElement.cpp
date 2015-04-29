#include <iostream>
#include <vector>
using namespace std;

int findPeakElement(const vector<int> &num)
{
	if(num.size() == 1)
		return 0;
	if(num.size() == 2)
	{
		if(num[0] > num[1])
			return 0;
		else
			return 1;
	}
	int i = 0;
	while(i < num.size()-1 && num[i] < num[i+1])
		i++;
	return i;

}

int main()
{
	int A[] = {1,2,5,4};
	vector<int> vec(A,A+4);
	cout<< findPeakElement(vec);
}
