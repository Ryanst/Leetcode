/*
https://leetcode.com/problems/longest-common-prefix/
Write a function to find the longest common prefix string amongst an array of strings.
*/

#include <iostream>
#include <vector>
using namespace std;

string longestCommonPrefix(vector<string> &strs)
{
	if(strs.size() == 0)
		return "";

	if(strs.size() == 1)
		return strs.at(0);

	size_t i = 0;
	int index = 0;
	bool isdiff = false;
	while(!isdiff)
	{
		for(size_t it = 1; it < strs.size();it++)
		{
			if(strs.at(it).length() <= i || strs.at(0)[i] != strs.at(it)[i])
			{
				index = i - 1;
				isdiff = true;
			}
		}
		i++;
	}

	if(index < 0)
		return "";

	return strs.at(0).substr(0,index+1);
}

int main()
{

}
