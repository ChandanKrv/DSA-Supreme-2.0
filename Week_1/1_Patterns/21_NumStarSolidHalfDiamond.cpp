#include <iostream> // Created by @ChandanKrV on 27 Sep, 2023.
using namespace std;
/* PROBLEM:
Numeric Star Mixed Soild Half Diamond:
1
2*2
3*3*3
4*4*4*4
5*5*5*5*5
5*5*5*5*5
4*4*4*4
3*3*3
2*2
1
*/
int main()
{
    int n = 5, count = 1;
    // For upper half
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if ((j ^ 1) == (j + 1))
                cout << "*";
            else
                cout << count;
        }
        count++;
        cout << endl;
    }
    // For Lower Half
    for (int i = 1; i <= n; i++)
    {
        count--;
        for (int j = 1; j <= 2 * (n - i) + 1; j++)
        {
            if ((j ^ 1) == (j + 1))
                cout << "*";
            else
                cout << count;
        }

        cout << endl;
    }
    return 0;
}