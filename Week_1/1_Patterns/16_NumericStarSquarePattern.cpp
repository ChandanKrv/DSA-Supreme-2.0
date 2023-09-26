#include <iostream> // Created by @ChandanKrV on 26 Sep, 2023.
using namespace std;
/* PROBLEM:
Numeric Star Square Pattern:
********1********
*******2*2*******
******3*3*3******
*****4*4*4*4*****
****5*5*5*5*5****
*/
int main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        // For Starting Stars
        for (int j = 1; j <= n + 4 - i; j++)
        {
            cout << "*";
        }

        // For Number and Star mixed
        for (int j = 1; j <= i; j++)
            cout << i << "*";

        // For Ending Stars
        for (int j = 1; j <= n + 3 - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}