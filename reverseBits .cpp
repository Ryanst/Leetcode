#include <iostream>
#include <math.h>
using namespace std;

uint32_t reverseBits(uint32_t n) {
    uint32_t x = n;
    uint32_t num = 0;
    int pl = 31;

    while(x != 0)
    {
        int res = x % 2;
        num += res * pow(2, pl);
        pl--;
        x /= 2;
    }
    return num;
}


int main()
{
    uint32_t n = 43261596;
    cout <<reverseBits(n);
}