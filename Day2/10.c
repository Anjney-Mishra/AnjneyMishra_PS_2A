#include <stdio.h>
void main()
{
    int n, i, j, s;
    // scanf("%d",&n);
    n = 3;
    for (i = n; i >= 1; i--)
    {
        for (s = 0; s < n - i; s++)
        {
            printf("  ");
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (i = 2; i <= n; i++)
    {
        for (s = 0; s < n - i; s++)
        {
            printf("  ");
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}