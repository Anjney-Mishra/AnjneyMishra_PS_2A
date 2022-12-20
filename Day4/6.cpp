#include<iostream>
using namespace std;
int isArmstrong(int);
int main()
{
    int l,r;
    cin>>l>>r;
    for(int i=l;i<=r;i++)
    {
        if(isArmstrong(i)==1)
        {
            cout<<i<<" ";
        }

    }
   return 0;
}
int isArmstrong(int n)
{
    int cp = n;
    int r,s=0;
    while(n!=0)
    {
        r = n%10;
        n = n/10;
        s = s + (r*r*r);
    }
    if(s==cp)
    {
        return 1;
    }
    else
    return 0;
}