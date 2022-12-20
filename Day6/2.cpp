#include<iostream>
using namespace std;
int main()
{
    int m,n;\
    cin>>m>>n;
    cout<<endl;
    int a[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"OutPut:\n";
    for(int i=n-1;i>=0;i--)
    {
        for(int j=0;j<m;j++)
        {
            cout<<a[j][i]<<" ";
        }
        cout<<endl;
    }

   return 0;
}