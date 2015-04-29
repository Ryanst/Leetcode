#include <iostream>
#include <cmath>
using namespace std;

int compareVersion(char *version1, char *version2)
{
	int vint1 = 0,vint2 = 0;

	do
	{
		if(*version1 == '.')	version1++;
		if(*version2 == '.')	version2++;

		vint1 = 0;
		vint2 = 0;
		while(*version1 != '.' && *version1 != '\0')
		{
			vint1 = 10*vint1 + (*version1 - 48);
			version1++;
		}
		while(*version2 != '.' && *version2 != '\0')
		{
			vint2 = 10*vint2 + (*version2 - 48);
			version2++;
		}
		if(vint1 > vint2)
			return 1;
		else if (vint1 < vint2)
			return -1;
		else if(*version1 == '\0' && *version2 == '\0')
			return 0;
	}while(version1 != NULL || version2 != NULL);

	return 0;
}

int main()
{
	char version1[] = "000.0";
	char version2[] = "0.0220";
	cout << compareVersion(version1,version2);
}
