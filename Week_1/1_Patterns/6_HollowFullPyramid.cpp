#include <iostream> // Created by @ChandanKrV on 24 Sep, 2023.
using namespace std;
/* PROBLEM:
Hollow Full Pyramid:
      *
     * *
    *   *
   *     *
  *       *
 * * * * * *
*/
int main()
{
    int n = 6;
    for (int i = 1; i <= n; i++)
    {
        // For Spaces
        for (int j = 1; j <= n + 1 - i; j++)
        {
            cout << " ";
        }
        // For Stars
        for (int j = 1; j <= i; j++)
        {
            if (i == 1 or i == n or j == 1 or j == i)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    return 0;
}