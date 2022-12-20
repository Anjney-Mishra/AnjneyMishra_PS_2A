#include<bits/stdc++.h>
using namespace std;
int leastprime(int n)
{
    if(n==1)
        return 1;
    else
    {

        for(int i=2;i<n;i++)
        {
            if(n%i==0)
            {
                return i;
                break;
            }
        }
    }

}
int main()
{
    int n;
    cin>>n;
    // int a[n];
    // for(int i=0;i<n;i++)
    // {
    //     cin>>a[i];
    // }
    for(int i=1;i<=n;i++)
    {
        printf("Least Prime Of %d = %d\n",i,leastprime(i));
    }
    
    

   return 0;
}
