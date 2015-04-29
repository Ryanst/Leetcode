#include <iostream>
using namespace std;

string convert2(string s, int nRows) {
    if(nRows<=1)return s;
    int k=2*nRows-2;
    int m = s.size()/k;
    int l = s.size()%k;
    int index = 0;
    string strRes(s.size(),'0');

    for(int j=0;j<nRows;j++){
        int i=0;
        while(index<s.size()){
            if(j==0){
                if(i*k<s.size()){
                    strRes[index]=s[i*k];
                    ++i;
                    ++index;
                }
                else break;
            }
            else if(j==nRows-1){
                if(i*k+j<s.size()){
                    strRes[index]=s[i*k+j];
                    ++i;
                    ++index;
                }
                else break;
            }
            else{//Rows from 1 to nRows-2
                if(i*k+j<s.size()){
                    strRes[index]=s[i*k+j];
                    ++index;
                    if(i*k+k-j<s.size()){
                        strRes[index]=s[i*k+k-j];
                        ++index;
                    }
                    ++i;
                }
                else break;
            }
        }
    }
    return strRes;
}

int main()
{
	while(1)
	{
		string s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
		int nRows = 4;
		string str = convert(s,nRows);
	}
}








