//Given radius of a circle, find the area of largest possible rectangle which may be enclosed completely within it.
    // diameter is largest chord -> rectangle diagonal -> square of length root2*r -> area = 2*(r*r)

#include<bits/stdc++.h>
using namespace std;
int main()
{
    float r;
    cout<<"Enter Radius Of Circle:"<<endl;
    cin>>r;
    cout<<"Area of rectangle inscribe in circle (MAX POSSIBLE):"<<endl;
    float area;
    area = 2*(r*r);//Formula
    cout<<area<<endl;

   return 0;
}