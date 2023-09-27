#include <iostream> // Created by @ChandanKrV on 27 Sep, 2023.
using namespace std;
/* PROBLEM:
Numeric Star Mixed Soild Half Diamond:

*/
int main()
{
    int n = 6, count = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((j ^ 1) == (j + 1))
                cout << "*";
            cout << count;
        }
        count++;
        cout << endl;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            if ((j ^ 1) == (j + 1))
                cout << "*";
            cout << count;
        }
        count--;
        cout << endl;
    }
    return 0;
}