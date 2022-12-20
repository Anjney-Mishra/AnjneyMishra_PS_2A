#include<iostream>
using namespace std;
int main()
{
    int c,f;
    cout<<"Enter the temperature in centigrade: ";
    cin>>c;
    f=((c*9)/5)+32;
    cout<<"The temperature in fahrenheit is: "<<f<<endl;
    if(c<0)
    {
        cout<<"Freezing weather";
    }
    else if(c>=0&&c<=10)
    {
        cout<<"Very cold weather";
    }
    else if(c>=11&&c<=20)
    {
        cout<<"Cold weather";
    }
    else if(c>=21&&c<=30)
    {
        cout<<"Normal in temperature";
    }
    else if(c>=31&&c<=39)
    {
        cout<<"Its hot";
    }
    else
    {
        cout<<"Its Very Hot";
    }
    return 0;
}