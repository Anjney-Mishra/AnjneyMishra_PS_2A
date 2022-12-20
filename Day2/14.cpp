#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    // cin>>n;
    int i, j, s;
    for (i = 1; i <= n; i++)
    {
        if (i == 1 || i == n)
        {
            for (j = 1; j <= n; j++)
            {
                cout << "*";
            }
        }
        else
        {
            for (s = 0; s < (n - i); s++)
            {
                cout << " ";
            }
            cout << "*";
        }

        cout << endl;
    }
    return 0;
}