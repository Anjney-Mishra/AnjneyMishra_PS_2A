#include<bits/stdc++.h>
using namespace std;
void concat(string s1,string s2)
{
    for(int i=0;i<s2.length();i++)
    {
        s1 = s1 + s2[i];
    }
    cout<<s1;
}
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    concat(s1,s2);

   return 0;
}