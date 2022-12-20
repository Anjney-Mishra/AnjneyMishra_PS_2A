#include <stdio.h>
float mean(int a[], int n)
{
    int i;
    float sum = 0;
    for (i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    return (sum / n);
}
int median(int a[], int n)
{
    int i, j, t;
    int x;
    int c[n];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        c[i] = a[i];
    }

    x = (n) / 2;
    return (c[x]);
}
void main()
{
    int a[5];
    int i;
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Mean:\n");
    printf("%f\n",mean(a,5));
    printf("Median:\n");
    printf("%d\n", median(a, 5));
}