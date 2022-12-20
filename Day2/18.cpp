#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string str;
    cin>>str;
    for(int i=0;i<=str.length();i++)
    {
        for(int j=1;j<i;j++)
        {
            cout<<".";
        }
        for(int j=i-1;j<=str.length();j++)
        {
            cout<<str[j];
        }
        cout<<endl;
    }
   return 0;
}