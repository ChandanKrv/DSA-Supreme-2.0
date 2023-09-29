#include <iostream> // Created by @ChandanKrV on 29 Sep, 2023.
using namespace std;
/* PROBLEM:
    *        *
    **      **
    ***    ***
    ****  ****
    **********
    **********
    ****  ****
    ***    ***
    **      **
    *        *
 */
int main()
{
    int n = 5;
    // For upper half
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        // For middle spaces
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    // For Lower Half
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "*";
        }
        // For middle spaces
        for (int j = 1; j <= i - 1; j++)
        {
            cout << "  ";
        }

        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}