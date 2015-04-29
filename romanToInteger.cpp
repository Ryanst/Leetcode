/*
 * https://leetcode.com/problems/roman-to-integer/
 *Given a roman numeral, convert it to an integer.
 Input is guaranteed to be within the range from 1 to 3999.
罗马数字转换成数字
*/
#include <iostream>
#include <cmath>
using namespace std;

int romanToInt(string s)
{
	char one[] = {'I','X','C','M'};
	char five[] = {'V','L','D'};
	size_t i = 0;
	int S = 0;
	size_t level = 3;

	while(i < s.length() && s[i] == one[level])
	{
		S+=pow(10,level);
		i++;
	}

	level--;

	while(i < s.length())
	{
		if(s[i] == one[level])
		{
			if(++i < s.length())
			{
				if(s[i] == one[level])
				{
					if(++i < s.length())
					{
						if(s[i] == one[level])
						{
							S+=3*pow(10,level);
							i++;
						}
						else
							S+=2*pow(10,level);
					}
					else
						S+=2*pow(10,level);
				}
				else if(s[i] == one[level+1])
				{
					S+=9*pow(10,level);
					i++;
				}
				else if(s[i] == five[level])
				{
					S+=4*pow(10,level);
					i++;
				}
				else
					S+=pow(10,level);
			}
			else
				S+=pow(10,level);
			
		}
		else if(s[i] == five[level])
		{
			S+=5*pow(10,level);
			while(s[++i] == one[level])
				S+=pow(10,level);
		}
		level--;
	}
	return S;
}


int main()
{
	cout <<romanToInt("CMLII");
}




