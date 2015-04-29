#include <iostream>
using namespace std;

string intToRoman(int num)
{
	string str = "";
	int t[4] = {0,0,0,0};
	char one[4] = {'I','X','C','M'};
	char five[3] = {'V','L','D'};
	int nu = num;
	int i = 0;
	while(nu != 0)
	{
		t[3-i] = nu % 10;
		nu /= 10;
		i++;
	}
	int h = 0;
	for(int i = 0;i < 4;i++)
	{
		switch(t[i]){
			case 0:
				break;
			case 1:
			{
				str.push_back(one[3-i]);
				break;
			}
			case 2:
			{
				str.push_back(one[3-i]);
				str.push_back(one[3-i]);
				break;
			}
			case 3:
			{
				str.push_back(one[3-i]);
				str.push_back(one[3-i]);
				str.push_back(one[3-i]);
				break;
			}
			case 4:
			{
				str.push_back(one[3-i]);
				str.push_back(five[3-i]);
				break;
			}
			case 5:
			{
				str.push_back(five[3-i]);
				break;
			}
			case 6:
			{
				str.push_back(five[3-i]);
				str.push_back(one[3-i]);
				break;
			}
			case 7:
			{
				str.push_back(five[3-i]);
				str.push_back(one[3-i]);
				break;
			}
			case 8:
			{
				str.push_back(five[3-i]);
				str.push_back(one[3-i]);
				str.push_back(one[3-i]);
				str.push_back(one[3-i]);
				break;
			}		
			case 9:
			{
				str.push_back(one[3-i]);
				str.push_back(one[4-i]);
				break;
			}	
			default:
			{
				break;
			}
		}
	}
	
	return str;
}

int main()
{
	int num = 1;
	string str = intToRoman(num);
	cout <<str;
}
