#include <iostream>
#include <vector>
using namespace std;
/*Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.

For example, given n = 3, a solution set is:

"((()))", "(()())", "(())()", "()(())", "()()()"
*/
vector<string> generateParenthesis(int n)
{
	vector<string> res;
	res.push_back("(");
	vector<string> tmp;
	for(int i = 1;i < 2*n;i++)
	{
		for(size_t h = 0;h < res.size();h++)//遍历已有的string
		{
			int leftnum = 0;
			for(size_t t = 0;int(t) < i;t++)//已经有多少个(
			{
				if(res.at(h)[t] == '(')
					leftnum++;
			}
			if(2*leftnum == int(i))
				tmp.push_back(res.at(h) + '(');
			else if(2*leftnum > int(i) && leftnum < n)
			{
				tmp.push_back(res.at(h) + '(');
				tmp.push_back(res.at(h) + ')');
			}
			else
				tmp.push_back(res.at(h) + ')');	
		}
		res = tmp;
		tmp.clear();
	}
	return res;
}

int main()
{
	int x;
	while(cin >>x)
	{
		vector<string> str(generateParenthesis(x));
		for(vector<string>::iterator itr = str.begin();itr != str.end();itr++)
			cout <<*itr <<endl;
	}
}

