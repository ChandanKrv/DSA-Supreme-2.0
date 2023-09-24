#include <iostream> // Created by @ChandanKrV on 24 Sep, 2023.
using namespace std;
/* PROBLEM:
Hollow Rectangle:
* * * * * * 
*         *
*         *
*         *
*         *
* * * * * *
*/

int main()
{
    int n = 6;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 or (i == n) or (j == 1) or j == n)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    return 0;
}
