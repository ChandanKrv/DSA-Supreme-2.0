#include <iostream> // Created by @ChandanKrV on 27 Sep, 2023.
using namespace std;
/* PROBLEM:
Hollow Diamond:

*/
int main()
{
    int n = 6;
    // Upper Stars
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
            cout << " ";

        for (int j = 1; j <= n; j++)
            if (j == 1 or j == i)
                cout << "* ";
            else
                cout << "  ";
        cout << endl;
    }
    // Lower Stars
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
            cout << " ";

        for (int j = 1; j <= n - i; j++)
            if (j == 1 or j == n - i)
                cout << "* ";
            else
                cout << "  ";
        cout << endl;
    }
    return 0;
}