#include <iostream> // Created by @ChandanKrV on 26 Sep, 2023.
using namespace std;
/* PROBLEM:
Solid Diamond:
     * 
    * *
   * * *
  * * * *
 * * * * *
* * * * * *
* * * * * *
 * * * * *
  * * * *
   * * *
    * *
     *
*/
int main()
{
    int n = 6;

    // For Upper Half
    for (int i = 1; i <= n; i++)
    {
        // For Space
        for (int j = 1; j <= n - i; j++)
            cout << " ";
        // For Stars
        for (int j = 1; j <= i; j++)
            cout << "* ";
        cout << endl;
    }
    // For Lower Half
    for (int i = 1; i <= n; i++)
    {
        // For Space
        for (int j = 1; j <= i - 1; j++)
            cout << " ";
        // For Stars
        for (int j = 1; j <= n + 1 - i; j++)
            cout << "* ";
        cout << endl;
    }
    return 0;
}