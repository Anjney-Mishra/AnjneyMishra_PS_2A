#include<iostream>
using namespace std;
int main()
{
    string str;
    int k=0;
    char outstr[k];
    getline(cin,str);
    for(int i=str.length();i>=0;i--)
    {
        outstr[k]=str[i];
        k++;
    }
    for(int i=0;i<k;i++)
    {
        cout<<outstr[i];
    }
   return 0;
}