#include<bits/stdc++.h>
using namespace std;
string lookandsay(int n)
{
    if(n==1)
        return "1";
    if(n==2)
        return "11";
    string res = lookandsay(n-1);
    string ans="";
    int count=1;
    for(int i=1;i<res.length();i++)
    {
        if(res[i]!=res[i-1])
        {
            ans += count+'0';
            ans += res[i-1];
            count=1;
        }
        else
            count++;
        if(i==res.length()-1)
        {
            ans += count+'0';
            ans += res[i];
        }
    }
    return ans;
}

int main()
{
    cout<<lookandsay(6);

   return 0;
}