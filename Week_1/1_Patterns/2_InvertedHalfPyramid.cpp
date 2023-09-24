#include <iostream> // Created by @ChandanKrV on 23 Sep, 2023.
using namespace std;
/* PROBLEM:
Inverted Half Pyramid:
******
*****
****
***
**
*
*/
int main()
{
    int n = 6;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n + 1 - i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}
