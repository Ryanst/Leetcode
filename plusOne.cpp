#include <iostream>
#include <vector>
using namespace std;

vector<int> plusOne(vector<int> &digits)
{
	int len = digits.size();
	int i = len -1;
	while(i >= 0 && digits.at(i) == 9)
	{
		digits.at(i) = 0;
		i--;
	}
	if(i < 0)
		digits.insert(digits.begin(),1);
	else
		digits.at(i)++;

	return digits;
}



int main(){
	int n[1] = {9};
	vector<int> num(n,n+1);
	plusOne(num);
}



