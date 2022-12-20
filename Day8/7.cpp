//primefactors
#include<bits/stdc++.h>
using namespace std;
void primefactors(int n)
{
    while(n%2==0)
    {
        cout<<2<<" ";
        n = n/2;
    }

    for(int i=2;i<=sqrt(n);i++)
    {
        while(n%i==0)
        {
            cout<<i<<" ";
            n = n/i;
        }
    }
    if(n>2)
        cout<<n<<" ";
}
int main()
{
    int n;
    cin>>n;
    primefactors(n);
   return 0;
}