#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int min(int a,int b);
int main() 
{

    int n;
    scanf("%d", &n);
      int r,c,cp;
      cp=n;
    n=2*n-2;
    for(r=0;r<=n;r++)
    {
        for(c=0;c<=n;c++)
        {
            int e;
            e=cp-min(min(r, c),min(n-r, n-c));
            printf("%d ",e);
        }
        printf("\n");
    }
    return 0;
}
int min(int a,int b)
{
    return (a>b)?(b):(a);
}
