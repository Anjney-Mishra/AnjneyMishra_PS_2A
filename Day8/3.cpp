#include<bits/stdc++.h>
using namespace std;
// int biffergate(int n)
// {
//     int sum=0,r;
//     while(n!=0)
//     {
//         r = n%10;
//         n = n/10;
//         sum = sum + r;
//     }
//     if(sum>9)
//     {
//         biffergate(sum);
//     }
//     else
//     {
//         return sum;
//     }
// }
    int digitsum(int n)
    {
        if(n==0)
            return 0;
        return (n%9==0)?9:(n%9);
    }
int main()
{
    int n;
    cin>>n;
    // cout<<biffergate(n);
    cout<<digitsum(n);

    

   return 0;
}