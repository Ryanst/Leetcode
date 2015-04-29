#include <iostream>
#include <algorithm>
using namespace std;

void merge(int A[], int m, int B[], int n)
{
	for(int i = 0;i < n;i++)
	{
		A[m+i] = B[i];
	}
	sort(A,A+m+n);
}
void merge1(int A[], int m, int B[], int n) {
        while(n&&m){
            if(A[m-1]>B[n-1]){
                A[m+n-1]=A[m-1];
                m--;
            }
            else{
                A[m+n-1]=B[n-1];
                n--;
            }
        }
        while(n){
            A[n-1]=B[n-1];
            n--;
        }
    }
int main()
{
	int A[6] = {2,5};
	int B[3] = {3,1,7};
	merge1(A,2,B,3);
	for(int i = 0;i < 5;i++)
		cout <<A[i];

	return 0;
}
