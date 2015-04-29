#include <iostream>
#include <math.h>
using namespace std;

int trailingZeroes(int n) {
        int i = 0;
        while(n >= 5) {
            i += n/5;
            n = n/5;
        }
        return i;
    }


int main()
{
	cout <<trailingZeroes(20);
}




