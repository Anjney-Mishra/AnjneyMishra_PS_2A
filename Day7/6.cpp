#include<bits/stdc++.h>
using namespace std;
int comparestring(string s1,string s2)
{
    string res="";
    for(int i=0;i<s2.length();i++)
    {
        res = res + s2[i];
    }
    if(res == s1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    cout<<comparestring(s1,s2);



   return 0;
}