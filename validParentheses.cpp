#include <iostream>
using namespace std;

bool isValid(string s)
{
	int len = s.length();
	if(len == 0)
		return true;
	if(len % 2 != 0)
		return false;
	int n = len;
	int top = -1;
	char stack[n];
	for(size_t i = 0;i < s.length();i++)
	{
		if(s[i] == '(' || s[i] == '{' || s[i] == '[')
			stack[++top] = s[i];
		else
		{
			if(s[i] == ')')
			{
				if(top < 0 || stack[top] != '(')
					return false;
				else
					top--;
			}
			if(s[i] == '}')
			{
				if(top < 0 || stack[top] != '{')
					return false;
				else
					top--;
			}
			if(s[i] == ']')
			{
				if(top < 0 || stack[top] != '[')
					return false;
				else
					top--;
			}
		}
	}
	if(top >= 0)
		return false;

	return true;
}

int main()
{
	string s = "{}[()]";
	cout <<isValid(s);
}

		if(top >= len /2)
			return false;






