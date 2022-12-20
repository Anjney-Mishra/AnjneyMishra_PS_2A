#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    int a[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }


    int t,d,l,r,g;
    g=0;t=0;l=0;d=m-1;r=n-1;

    while(t<=d && l<=r)
    {
        if(g==0)
        {
            for(int i=l;i<=r;i++)
            {
                cout<<a[t][i]<<" ";
            }
            t++;
        }
        else if(g==1)
        {
            for(int i=t;i<=d;i++)
            {
                cout<<a[i][r]<<" ";   
            }
            r--;
        }
        else if(g==2)
        {
            for(int i=r;i>=l;i--)
            {
                cout<<a[d][i]<<" ";
            }
            d--;
        }
        else if(g==3)
        {
            for(int i=d;i>=t;i--)
            {
                cout<<a[i][l]<<" ";
            }
            l++;
        }

        g=(g+1)%4;
    }


   return 0;
}