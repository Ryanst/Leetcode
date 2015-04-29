#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

bool isPalindrome(char *s) {
	if(s == NULL)
		return true;
	int len = strlen(s);
	int head = 0,tail = len-1;
	while(head < tail)
	{
		while(head<=len && !((s[head]>='A'&&s[head]<='Z')||(s[head]>='a'&&s[head]<='z') || (s[head]>='0'&&s[head]<='9')))
			head++;

		if(head>=len)
			return true;

		while(tail>=0 && !((s[tail]>='A'&&s[tail]<='Z')||(s[tail]>='a'&&s[tail]<='z') || (s[tail]>='0'&&s[tail]<='9')))
			tail--;

		if(s[head] != s[tail] && abs(s[head]-s[tail])!=32)
			return false;
		head++,tail--;
	}
	return true;
}

int main()
{
	char ch[50];
	cin.getline(ch,20);
	cout <<isPalindrome(ch);
}




