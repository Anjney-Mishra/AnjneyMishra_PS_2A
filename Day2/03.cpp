#include<iostream>
using namespace std;
int main()
{
    int n=4;
    int i,j;
    char c='A';
    for(i=1;i<=n-1;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<c;
        }
        c++;
        cout<<endl;
    }
   return 0;
}