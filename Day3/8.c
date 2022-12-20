#include<stdio.h>
void main()
{
 int n,sum=0,m=1;
 n=4;
 int i;
 for(i=1;i<=n;i++)
 {
    m=i*(i+1)*(i+2);
    sum = sum + m;
 }
 printf("%d",sum);
}