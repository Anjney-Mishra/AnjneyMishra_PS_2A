#include <stdio.h>
#include <math.h>
void main()
{
    float n, x;
    int a=0;
    n = 5;
    n = n - 1;
    x = 1;
    float i, fact = 1, sum = 0;
    for (i = 1; i <= n; i++)
    {
        a++;
        fact = fact * i;
        sum = sum + (pow(-1,a)* + ((i/fact)*x));
    }
    printf("%f", sum + 1);
}