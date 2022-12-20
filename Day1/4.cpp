#include<iostream>
using namespace std;
int main()
{
    int y;
    cout<<"Enter the year:\n";
    cin>>y;
    ((y%4==0&&y%100!=0)||(y%400==0))?cout<<"Leap Year":cout<<"Common Year";
    return 0;
}