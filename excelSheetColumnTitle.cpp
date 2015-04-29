#include <iostream>
#include <string>
using namespace std;


string convertToTitle(int n)
{
	if(n <= 0)
		return "";

	int num = n;
	string s = "";
	while(1)
	{
		s.insert(0,1,char((num%26)==0?90:(num%26)+ 64));
		if(num % 26 == 0)
			num--;
		if(num < 26)
			break;
		num /= 26;
	}
	return s;
}
//leetcode上的解法，
string convertToTitle1(int n) {

    string res;

    char tmp;

    while(n){

        n -= 1;

        tmp = 'A' + n % 26;

        res = tmp + res;

        n /= 26;

    }

    return res;

}

int main()
{
	cout <<convertToTitle(122);
}



