#include <iostream>
#include <vector> 
#include <cmath>
#include <cstring>
using namespace std;

vector<string> letterCombinations(string digits)
{
	vector<string> res;
	if(digits.empty())
		return res;
	res.push_back("");
	string charmap[10] = {"0","1","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

	for(int i = 0;i < digits.size();i++)
	{
		vector<string> tmp;
		string str = charmap[digits[i]-'0'];
		for(int x = 0;x < res.size();x++)
		{
			for(int h = 0;h < str.size();h++)
			{
				tmp.push_back(res[x] + str[h]);
			}
		}
		res = tmp;
	}

	return res;
}

int main()
{
	string digits = "2";
	vector<string> vec(letterCombinations(digits));
	for(vector<string>::iterator itr = vec.begin();itr != vec.end();itr++)
		cout <<*itr;
}
