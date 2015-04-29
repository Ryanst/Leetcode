#include <iostream>
using namespace std;

int main()
{

}

bool isPalindrome(int x) 
{
	if(x < 0)
		return false;

	int in[10];
    for(int i = 0;i < 10;i++)
    	in[i] = 0;

    int index = 0;
    while(x != 0)
    {
    	in[index] = x % 10;
    	x = x / 10;
    	index++;
    }
    index--;
    for(int i = 0;i < index / 2; i++)
    {
    	if(in[i] != in[index-i])
    		return false;
    }
    return true;
}