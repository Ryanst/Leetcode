#include <iostream>
#include <string>
using namespace std;


//经过改动，成为这个简洁的版本
string addBinary(string a, string b)
{
	int ia = a.length() - 1;
	int ib = b.length() - 1;

	if(ia < 0 || ib < 0)
		return ia < 0?b:a;
	
	string s;
	int add = 0;
	int an = 0,bn = 0;
	while(ia >= 0 || ib >= 0 || add == 1)
	{
		add += ia<0?0:a[ia]-'0';
		add += ib<0?0:b[ib]-'0';
		s = char(add%2+'0') + s;
		add /= 2;
		ia--,ib--;
	}

	return s;
}

int main()
{
	string a = "1";
	string b = "1";
	cout<< addBinary(a,b);
}
