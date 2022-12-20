#include <stdio.h>
void main()
{
    int n;
    n = 6;
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j < i; j++)
        {
            printf("%d", j);
        }
        for (j = i; j >= 1; j--)
        {
            printf("%d", j);
        }
        printf(" ");
    }
}