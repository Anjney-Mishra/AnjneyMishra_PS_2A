#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    if((str[0]=='_')||((str[0]>=65 && str[0]<=90)||(str[0]>=97 && str[0]<=122)))
    {
        // int count=0;
        for(int i=0;i<str.length();i++)
        {
            if(str[i]==' ')
            {
                cout<<"Not Valid";
                exit(1);
            }
        }
        cout<<"valid";
    }
    else
    {
        cout<<"Not Valid";
    }
   return 0;
}