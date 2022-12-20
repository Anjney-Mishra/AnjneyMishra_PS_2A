#include <iostream>
using namespace std;
int gcd(int, int);
int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    int lcm = (n1*n2)/gcd(n1,n2);     //lcm = n1*n2 / gcd
    cout<<lcm;

    return 0;
}
int gcd(int n1, int n2)
{
    int l;
    (n1 > n2) ? (l = n2) : (l = n1);
    for (int i = l; i >= 1; i--)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            return i;
            break;
        }
    }
}