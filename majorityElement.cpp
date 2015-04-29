#include <iostream>
#include <cmath>
using namespace std;

int majorityElement(int num[], int n) 
{
    int can = 0;
    int count = 0;
    for(int i = 0;i < n;i++)
    {
    	if(count == 0)
    	{
    		can = num[i];
    		count++;
    	}
    	else
    	{
    		if(can == num[i])
    		{
    			count++;
    		}
    		else
    		{
    			count--;
    		}
    	}
    }
    return can;
}

int main()
{
	int num[] = {1,1,2,2,2,4,4,4,4,4,4,4,6,6};
	cout<< majorityElement(num,14);
}



