#include<iostream>
using namespace std;
int main()
{
    int n=4;
    int i,j,s;
    for(i=1;i<=n;i++)
    {
        for(s=0;s<n-i;s++)
        {
            cout<<" ";
        }
        for(j=0;j<i;j++)
        {
            cout<<i+j<<" ";
        }
        cout<<endl;
    }
   return 0;
}