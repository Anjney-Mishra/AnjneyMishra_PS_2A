#include<iostream>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    int c=0;
    for(int i=0; str[i]!='\0'; i++)
    {
        if(str[i]==' ')
        {
            c++;
        }
    }
    cout<<c + 1;
   return 0;
}