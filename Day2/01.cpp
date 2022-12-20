#include<iostream>
using namespace std;
int main()
{
    int n=4;
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=0;j<i;j++)
        {
            cout<<i+j<<" ";
        }
        cout<<endl;
    }
   return 0;
}