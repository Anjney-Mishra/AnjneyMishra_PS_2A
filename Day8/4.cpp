#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string str = to_string(n);
    int s1=0,s2=0;
    int mid = str.length()/2;
    for(int i=0;i<mid;i++)
    {
        s1 = s1 + int(str[i]-'0');
    }
    for(int i=mid+1;i<str.length();i++)
    {
        s2 = s2 + int(str[i]-'0');
    }
    if(s1==s2)
        cout<<"Balanced";
    else
        cout<<"Unbalanced";



    




    

   return 0;
}