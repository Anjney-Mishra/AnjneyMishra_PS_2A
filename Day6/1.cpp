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
    for(int i=0;i<n;i++)
    {
        for(int j=m-1;j>=0;j--)
        {
            cout<<a[j][i]<<" ";
        }
        cout<<endl;
    }

   return 0;
}