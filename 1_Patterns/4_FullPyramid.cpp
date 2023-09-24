#include <iostream> // Created by @ChandanKrV on 23 Sep, 2023.
using namespace std;
/* PROBLEM:
Full Pyramid:
          *
        * * *
      * * * * *
    * * * * * * *
  * * * * * * * * *
* * * * * * * * * * *
*/

/*
int main()
{
    int n = 6;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n * 2; j++)
        {
            if (j >= n + 1 - i and j <= n - 1 + i)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << "\n";
    }
    return 0;
}
*/

// OR
int main()
{
    int n = 6;
    for (int i = 1; i <= n; i++)
    {
        // Spaces
        for (int j = n; j >= i; j--)
        {
            cout << " ";
        }

        // Stars
        for (int k = 1; k < i; k++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
    return 0;
}