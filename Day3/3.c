#include <stdio.h>
void main()
{
    float n,x;
    n = 4;
    n=n-1;
    x=1;
    float i, fact = 1, sum = 0;
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
        sum = sum + ((i/fact)*x);
    }
    printf("%f", sum + 1);
}