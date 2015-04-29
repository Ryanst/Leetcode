#include <iostream>
using namespace std;

string countAndSay(int n)
{
	if(n == 0)
		return "";
	if(n == 1)
		return "1";
	string tmp = "",res = "1";

	for(int i = 2;i <= n;i++)
	{
		for(int h = 0;h < int(res.size());h++)
		{
			int count = 1;
			while(h < int(res.size())-1 && res[h] == res[h+1])
			{
				h++;
				count++;
			}

			int curSize = tmp.size();
			while(count > 0)
			{
				tmp.insert(curSize,1,char(count%10+'0'));
				count /= 10;
			}
			tmp.push_back(res[h]);
		}
		res = tmp;
		tmp.clear();
	}
	return res;
}

int main()
{
	int n;
	while(cin >>n)
	{
		cout <<countAndSay(n) <<endl;
	}
}
