#include <stdio.h>
void main()
{
    int n;
    n = 3;
    int i, fact = 1, sum = 0;
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
        sum = sum + fact;
    }
    printf("%d", sum);
}