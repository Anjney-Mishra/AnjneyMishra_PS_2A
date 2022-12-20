//Quadratic Roots
#include<bits/stdc++.h>
using namespace std;
int main()
{
    float a,b,c;
    cout<<"Enter a, b and c\n";
    cin>>a>>b>>c;
    float d;
    d=(b*b)-4*a*c;
    if(d>0)
    {
        cout<<"Real Roots\n";
        float root1 = (-b + sqrt(d))/(2*a);
        float root2 = (-b - sqrt(d))/(2*a);
        cout<<root1<<endl<<root2;
    }
    else if(d==0)
    {
        float root1 = (-b + sqrt(d))/(2*a);
        cout<<root1;
    }

    else if(d<0)
    {
        cout<<"Complex Root\n";
        cout<<(-b/(2*a))<<"+"<<sqrt(-d)/(2*a)<<"i"<<endl;
        cout<<(-b/(2*a))<<"-"<<sqrt(-d)/(2*a)<<"i";


    }

   return 0;
}
