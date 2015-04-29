#include <iostream>
using namespace std;

int calNum(int n)
{
	int sum = 0;
	int tmp;
	while(n != 0)
	{
		tmp = n % 10;
		sum += tmp*tmp;
		n = n / 10;
	}
	return sum;
}

bool isHappy(int n)
{
	if(n == 1)	return true;
	int one = n;
	int two = n;
	do
	{
		one = calNum(one);
		two = calNum(two);
		two = calNum(two);
	}while(one != 1 && one != two);

	if(one == 1)	return true;

	return false;
}

int main()
{
	int n;
	while(cin >>n)
		cout <<isHappy(n) <<endl;

	return 0;
}
