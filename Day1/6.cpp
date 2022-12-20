#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the sides of the triangle\n";
    cin>>a>>b>>c;
    if(a==b&&b==c&&c==a)
    {
        cout<<"Equilateral";
    }
    else if(a==b||b==c||a==c)
    {
        cout<<"Isoceles";
    }
    else
    {
        cout<<"Scalene";
    }
    return 0;
}