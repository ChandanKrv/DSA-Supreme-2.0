#include <iostream> // Created by @ChandanKrV on 24 Sep, 2023.
using namespace std;
/* PROBLEM:
Inverted Full Pyramid:
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
    for (int i = 1; i <= n; i++)
    {
        // For Spaces
        for (int j = 1; j <= i - 1; j++)
        {
            cout << " ";
        }
        // For Stars
        for (int j = 1; j <= n + 1 - i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}