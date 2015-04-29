#include <iostream>
#include <cmath>
using namespace std;


 int titleToNumber(string s)
 {
 	int num = 0;
 	for(int i = 0;i < s.length();i++)
 	{
 		num += (s[i]-64)*pow(26,s.length()-i-1);
 	}
 	return num;
 }

 int main()
 {
 	cout <<titleToNumber("AB");
 }