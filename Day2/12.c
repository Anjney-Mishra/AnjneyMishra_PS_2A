#include<stdio.h>
void main()
{
 int n;
 n=6;
//  scanf("%d",&n);
 int i,j,k;

 for(i=n;i>=1;i--)
 {
    for(j=1;j<=i;j++)
    {
        printf("%d ",j);
    }
    for(k=0;k<2*(n-i)-1;k++)
    {
        printf("  ");
    }
    for(j=i;j>=1;j--)
    {
        if(j==n)
        {
            continue;
        }
        else
        printf("%d ",j);
    }
    printf("\n");
 }
}