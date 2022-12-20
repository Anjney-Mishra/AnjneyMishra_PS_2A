#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[26]={0};

    string str;
    cin>>str;

    
    for(int i=0;i<str.length();i++)
    {
        arr[str[i]-97]++;
    }
    // for(int i=0;i<26;i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    for(int i=0;i<str.length();i++)
    {
        cout<<arr[str[i]-97]<<" ";
    }

   return 0;
}