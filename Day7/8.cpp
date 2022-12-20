#include<bits/stdc++.h>
using namespace std;
int checkprefix(string a,string b)
{
    int count=0;
    for(int i=0;i<b.length();i++)
    {
        
        if(b[i]==a[i])
        {
            count++;
        }
    }
    if(count==b.length())
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n;
    cin>>n;
    string arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter String\n";
    string s;
    cin>>s;
    int res=0;
    for(int i=0;i<n;i++)
    {
        res += checkprefix(s,arr[i]);
    }
    cout<<res;

   return 0;
}