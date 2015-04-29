#include <iostream>
using namespace std;

int removeElement(int A[], int n, int elem);

int main()
{
	int A[] = {2,2,3};
	cout << removeElement(A,3,2) <<endl;
	for(int i = 0;i < removeElement(A,3,2);i++)
		cout <<A[i] << "   ";

}

int removeElement(int A[], int n, int elem) 
{
	if(n == 0)
		return 0;

	int num = n;
	int i = 0;
	//for(int i = 0;i < num;i++)
	while(i < num)
	{
		if(A[i] == elem)
		{
			int h = i;
			while(h < num - 1)
			{
				A[h] = A[h + 1];
				h++;
			}
			num = num - 1;
		}
		else
			i++;
	}
	return num;
        
}