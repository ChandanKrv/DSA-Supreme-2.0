#include <iostream> // Created by @ChandanKrV on 23 Sep, 2023.
using namespace std;
/* PROBLEM:
Hollow Inverted Half Pyramid:
********
*     *
*    *
*   *
*  *
* *
**
*
*/
int main()
{
    int n = 8;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if ((i == 1) or (j == 1) or (j == n + 1 - i))
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }
    return 0;
}
