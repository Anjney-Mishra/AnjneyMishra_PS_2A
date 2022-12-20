#include<iostream>
using namespace std;
int isPrime(int);      
int main()
{
    int l,r;
    cin>>l>>r;
    for(int i=l;i<=r;i++)
    {
        if(isPrime(i)==1)
        {
            cout<<i<<" ";
        }
    }
   return 0;
}
int isPrime(int n)
{
    int count=0;
    for(int i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==1)
    {
        return 1;
    }
    else
    return 0;
}