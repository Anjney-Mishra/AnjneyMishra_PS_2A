#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"Enter the coordinate\n";
    cin>>x>>y;
    if(x>0&&y>0)
    {
        cout<<"First Quadrent";
    }
    else if(x<0&&y>0)
    {
        cout<<"Second Quadrent";
    }
    else if(x<0&&y<0)
    {
        cout<<"Third Quadrent";
    }
    else if(x>0&&y<0)
    {
        cout<<"Fourth Quadrent";
    }
    return 0;
}