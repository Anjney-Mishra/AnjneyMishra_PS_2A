#include<iostream>
using namespace std;
void seq(int);
void seq(int n)
{
    cout<<n<<" ";
    if(n<=0)
    return;
    seq(n-5);
    cout<<n<<" ";
}
int main()
{
    int n;
    cin>>n;
    seq(n);

    return 0;
 
}
