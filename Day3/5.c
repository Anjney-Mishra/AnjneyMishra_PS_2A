#include <stdio.h>
#include <math.h>

float fact(float);

void main()
{
    float n, x;
    n = 4;
    int a = 1;
    n = 2 * n - 1;
    x = 1;
    float i, sum = 0;
    for (i = 1; i <= n; i = i + 2)
    {
        a++;
        sum = sum + (pow(-1, a) * ((i / fact(i)) * x));
    }
    printf("%f", sum);
}

float fact(float x)
{
    if (x == 0)
        return 0;
    else if (x == 1)
        return 1;
    else
        return (x * fact(x - 1));
}