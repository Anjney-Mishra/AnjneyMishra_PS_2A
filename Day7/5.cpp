#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
//a-z 97 122
//A-Z 65 90
    for(int i=0;i<str.length();i++)
    {
        if(str[i]>=65 && str[i]<=90)
        {
            str[i]=str[i]+32;
        }
        else if(str[i]>=97 && str[i]<=122)
        {
            str[i]=str[i]-32;
        }
    }
    for(int i=0;i<str.length();i++)
    {
        cout<<str[i];
    }
   return 0;
}