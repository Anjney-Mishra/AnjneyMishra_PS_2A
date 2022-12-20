#include<iostream>
using namespace std;
int main()
{
    int n,x,t;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n/2;i++)
    {
        x=2*i;
        t = a[x];
        a[x] = a[x+1];
        a[x+1] = t;

    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
   return 0;
}