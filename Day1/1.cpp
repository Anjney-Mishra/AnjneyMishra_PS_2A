#include<iostream>
using namespace std;
int main()
{
    int ts,bs,alw;
    float hra,da,pf;
    char g;
    cout<<"Enter the grade\n";
    cin>>g;
    cout<<"Enter the basic salary\n";
    cin>>bs;
    hra=0.2*bs;
    da=0.5*bs;
    pf=0.11*bs;
    if(g=='A')
    {
        alw=1700;
    }
    else if(g=='B')
    {
        alw=1500;
    }
    else
    {
        alw=1300;
    }
    ts=bs+hra+da+alw-pf;
    cout<<"The total salary is "<<ts;
    return 0;
}
