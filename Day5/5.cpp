#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int k=0;
    int j=0;
    int b[k],c[j];
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            b[k]=a[i];
            k++;
        }
        else{
            cout<<a[i]<<" ";
        }
    }
    for(int i=k-1;i>=0;i--)
    {
        cout<<b[i]<<" ";
    }

   return 0;
}