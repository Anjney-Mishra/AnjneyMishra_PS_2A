#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,res,k;
    cout<<"Enter a and b where (a to power b)"<<endl;
    cin>>a>>b;
    cout<<"Enter k (digit from right side)"<<endl;
    cin>>k;
    res = (int) pow(a,b);
    cout<<res<<endl;

    
    string str = to_string(res);

    
    cout<<str[(str.length() - k)];

   return 0;
}