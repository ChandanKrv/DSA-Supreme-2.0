#include <iostream> // Created by @ChandanKrV on 26 Sep, 2023.
using namespace std;
/* PROBLEM:
Solid Diamond:
*/
int main()
{
    int n = 6;
    for (int i = 1; i <= n; i++)
    {
        // For Spaces
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        // For Upper Half Stars
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }

        // For Lower Half Stars
        for (int j = 1; j <= i; j++)
        {
            // cout << "* ";
        }

        cout << endl;
    }
    return 0;
}