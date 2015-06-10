#include <iostream>
#include <map>
using namespace std;

bool isIsomorphic(string s, string t) {
	map<char,char> chmap;
	for(int i = 0;i < s.length();i++)
	{
		if(chmap.find(s[i]) != chmap.end() && chmap[s[i]] != t[i])
			return false;
		else
			chmap.insert(pair<char,char>(s[i],t[i]));
	}
	map<char,char> chmap2;

	for(int i = 0;i < t.length();i++)
	{
		if(chmap2.find(t[i]) != chmap2.end() && chmap2[t[i]] != s[i])
			return false;
		else
			chmap2.insert(pair<char,char>(t[i],s[i]));
	}

	return true;
}

int main()
{
	string s;
	string t;
	while(true)
	{
		cin >>s >>t;
		cout <<isIsomorphic(s,t) <<endl;
	}

}
