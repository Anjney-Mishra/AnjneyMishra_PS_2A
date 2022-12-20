#include <stdio.h>
int palindrome(int);
int palindrome(int x)
{
    int c=x;
    int r, s = 0;
    while (x != 0)
    {
        r = x % 10;
        x = x / 10;
        s = s * 10 + r;
    }
    if (s == c)
        printf ("Palindrome");
    else
        printf ("Not Palindrome");
}
void main()
{
    int n;
    scanf("%d",&n);
    printf("%s",palindrome(n));
    
    
}