#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string str;
    cin>>str;
    // revstr="";

    // for(int i=str.length();i>=0;i--)
    // {
    //     revstr = revstr + str[i];
    // }
    // cout<<revstr;
    string rev = string(str.rbegin(), str.rend());
    if(str == rev)
    {
        cout<<"Yes";
    }
    else
        cout<<"No";



   return 0;
}