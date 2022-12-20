#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    int pos1,pos2;

    
    for(int i=0;i<str.length();i++)
    {
        if(str[i]==' ')
            continue;
        else
        {
            pos1=i;
            break;
        }
    }

    for(int i=str.length();i>=0;i--)
    {
        if(str[i]==' ')
            continue;
        else
        {
            pos2=i-1;
            break;
        }
    }

    // cout<<pos1<<" "<<pos2<<endl;

    for(int i=pos1;i<=pos2;i++)
    {
        cout<<str[i];
    }



   return 0;
}
