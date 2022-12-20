#include<stdio.h>
int fact(int);
int fact (int x)
{
    if(x==1)
    return 1;
    else if(x==0)
    return 0;
    else
    return (x*fact(x-1));
}
void main()
{
 int n;
 scanf("%d",&n);
 printf("Factorial of %d is:\n",n);
 printf("%d",fact(n));
}