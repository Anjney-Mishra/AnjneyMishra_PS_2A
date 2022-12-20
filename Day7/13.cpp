#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string str[n];
    string temp;
    for(int i=0;i<n;i++)
    {
        cin>>str[i];
    }
    cout<<"Sorted"<<endl;
    int i,j;
   for(i = 0; i < n-1; ++i)
   {
   for(j = i+1; j < n; ++j) 
   {
      if(str[i] > str[j])
       {
         temp = str[i];
         str[i] = str[j];
         str[j] = temp;
      }
   }
   }
    for(int i=0;i<n;i++)
    {
        cout<<str[i]<<endl;
    }
    return 0;
}