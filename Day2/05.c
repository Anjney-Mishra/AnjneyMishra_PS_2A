#include<stdio.h>
int main()
{
    int n=4;
    // scanf("%d",&n);
    int i,j;
    char c='A'+n;
    for(i=1;i<=n+1;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("%c",c-i+j+1);
        }
        printf("\n");
    }
    return 0;
}