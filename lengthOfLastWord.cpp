#include <iostream>
using namespace std;

int lengthOfLastWord(const char *s)
{
	size_t len = 0;
	size_t lastlen = 0;
	for(;*s != '\0';s++)
	{
		if(*s != ' ')
			len++;
		else if(len != 0)
		{
			lastlen = len;
			len = 0;
		}
	}

	return len >0?len:lastlen;
}

int main(int argc,char ** argv)
{
	const char *p = "hi";
	if(argc >1)
		p = argv[1];
	cout <<lengthOfLastWord(p) <<endl;
}
