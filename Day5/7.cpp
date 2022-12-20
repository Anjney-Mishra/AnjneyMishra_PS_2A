#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }
    int k=0;
    int b[n];
    for(int i=n-1;i>=0;i--)
    {
        b[k]=a[i];
        k++;
    }
    for(int i=0;i<k;i++)
    {
        cout<<b[i]<<" ";
    }
   return 0;
}