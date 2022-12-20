#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    int sum;
    int k = 0;
    int s[2*n+2];


    //Row Sum
    
    for (int i = 0; i < n; i++)
    {
        sum=0;
        for (int j = 0; j < n; j++)
        {
            sum = sum + a[i][j];
        }
        s[k] = sum;
        k++;
    }

    sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i][i];
    }
    s[k] = sum;
    k++;









    for (int i = 0; i < n; i++)
    {
        sum=0;
        for (int j = 0; j < n; j++)
        {
            sum = sum + a[j][i];
        }
        s[k] = sum;
        k++;
    }



    int i, j;
     sum=0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if ((i + j) == (n - 1))
            {
                sum = sum + a[i][j];
               
            }

             
        }
        
    }
    s[k] = sum;
    k++;




    int s1=0;
    for (int i = 0; i < k; i++)
    {
        if(s[0]!=s[i])
        {
            s1=1;
            cout<<"Not Magic Matrix";
            break;
        }
        
        
    }
    if(s1==0)
    {
        cout<<"Magic Matrix";
    }



}