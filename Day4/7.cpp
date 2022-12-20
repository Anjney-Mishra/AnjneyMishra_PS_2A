#include<iostream>
using namespace std;
int fact(int);
int isStrong(int);
int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        if(isStrong(i)==1)
        {
            cout<<i<<" ";
        }
    }


   return 0;
}
int fact (int x)
{
    if(x==1)
    return 1;
    else if(x==0)
    return 0;
    else
    return (x*fact(x-1));
}
int isStrong(int n)
{
    int cp = n;
    int r,s=0;
    while(n!=0)
    {
        r = n%10;
        n = n/10;
        s = s + fact(r);
    }
    if (s == cp)
    {
        return 1;
    }
    else
    return 0;
}
