#include<stdio.h>
int main()
{
    int n=4;
    int i,j;
    char c='A';
    for(i=1;i<=n;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("%c",c+i+j-1);
        }
        printf("\n");
    }
    return 0;
}