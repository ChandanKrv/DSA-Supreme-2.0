#include <iostream> // Created by @ChandanKrV on 25 Sep, 2023.
using namespace std;
/* PROBLEM:
Numerical Full Pyramid:

*/
int main()
{
    int n = 6;
    for (int i = 1; i <= n; i++)
    { // For Spaces
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        // For Numbers
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}