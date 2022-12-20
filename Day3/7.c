#include <stdio.h>
#include <math.h>

float fact(float);

void main()
{
    float n, x;
    n = 3;
    int a = 1;


 
    float i, sum = 0;
    for (i = 1; i <= n; i++)
    {
        a++;
        sum = sum + ((pow(-1,a) * (i/fact(2*i-1))));
        
    }
    printf("%f ",sum);
    
}

float fact(float x)
{
    if (x == 0)
        return 0;
    else if (x == 1)
        return 1;
    else
        return (x * fact(x - 1));
}