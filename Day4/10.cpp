#include <bits/stdc++.h>
using namespace std;
long power(int a, int b)
{
    if (b == 0)
        return 1;
    else if (b % 2 == 0)
        return power(a, b / 2) * power(a, b / 2);
    else
        return a * power(a, b / 2) * power(a, b / 2);
}
int main()
{
    cout<<power(2, 4);
    return 0;
}