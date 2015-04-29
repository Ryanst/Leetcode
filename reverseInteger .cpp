#include <iostream>
#include <math.h>
using namespace std;

int reverse(int x) {
    bool isneg = x < 0?true:false;
    x = abs(x);
    int level = 0;
    int testx = x;
    while((testx /= 10) != 0)
        level++;
    
    int n = x;
    int num = 0;
    int pl = level;

    while(n != 0)
    {
        int res = n % 10;
        num += res * pow(10, pl);
        if(num < 0)
            return 0;
        pl--;
        n /= 10;
    }
    return isneg?-num:num;
}


int main()
{
    int n = 1000000003;
    cout <<reverse(n);
}