// #include<stdio.h>
// void main()
// {
//  int n;
//  n=5;
//  int i,j,s;
//  for(i=1;i<=n;i++)
//  {
//     for(j=1;j<=i;j++)
//     {
//         printf("%d",j);
//     }
    
//     printf("\n");

    
//  }
 
//  for(i=1;i<=n;i++)
//  {
//     for(s=1;s<=n-i;s++)
//     {
//         printf(" ");
//     }
//     for(j=i;j>=1;j--)
//     {
//         printf("%d",j);
//     }
//     printf("\n");
//  }
// }


#include<stdio.h>
void main()
{
 int n;
 n=5;
 int i,j,s;
 for(i=1;i<=n;i++)
 {
    for(j=1;j<=i;j++)
    {
        printf("%d",j);
    }
    
    
        for(s=1;s<=2*(n-i);s++)
    {
        printf(" ");
    }
    for(j=i;j>=1;j--)
    {
        printf("%d",j);
    }
    printf("\n");
    
 }
}