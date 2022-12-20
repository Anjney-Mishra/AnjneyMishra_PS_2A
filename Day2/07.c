#include<stdio.h>
void main()
{
    int n;
    n=4;
    int i,j,k;
    for(i=1;i<=n;i++)
    {
        for(k=0;k<n-i;k++)
        {
            printf(" ");
        }
        for(j=i;j>=1;j--)
        {
            printf("%d",j);
        }
        for(j=2;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}