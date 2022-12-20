#include <stdio.h>
int perfect(int);
int perfect(int n)
{
    int i, c = 0, sum = 0;
    for (i = 1; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == n)
    {
        return 1;
    }
    else
        return 0;
}
void main()
{
    int n;
    scanf("%d", &n);
    int i;
    printf("Perfect Number Between 1 and %d are:\n",n);
    for(i=1;i<=n;i++)
    {
        if(perfect(i)==1)
        printf("%d ",i);
    }
}