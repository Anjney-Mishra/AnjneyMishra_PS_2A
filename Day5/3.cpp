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
    if(n%2==0)
    {
        int sum1=0,sum2=0;
            for(int i=0;i<n/2;i++)
            {
                sum1 = sum1 + a[i];
            }
            for(int i=n/2;i<n;i++)
            {
                sum2 = sum2 + a[i];
            }
            cout<<sum1*sum2;
    }
    else
    {
            int sum1=0,sum2=0;
            for(int i=0;i<n/2;i++)
            {
                sum1 = sum1 + a[i];
            }
            for(int i=n/2;i<=n;i++)
            {
                sum2 = sum2 + a[i];
            }
            cout<<sum1*sum2;
    }

   return 0;
}