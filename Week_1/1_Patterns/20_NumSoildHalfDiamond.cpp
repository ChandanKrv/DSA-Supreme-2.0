#include <iostream> // Created by @ChandanKrV on 27 Sep, 2023.
using namespace std;
/* PROBLEM:
Numeric Solid Half Diamond:
5
6 6
7 7 7
8 8 8 8
9 9 9 9 9
8 8 8 8
7 7 7
6 6
5
*/
int main()
{
    int n = 5;
    int count = n - 1;

    // For upper halfs
    for (int i = 1; i <= n; i++)
    {
        count++;
        for (int j = 1; j <= i; j++)
        {
            cout << count << " ";
        }

        cout << endl;
    }
    // For Lower half
    for (int i = 1; i <= n; i++)
    {
        count--;
        for (int j = 1; j <= n - i; j++)
        {
            cout << count << " ";
        }

        cout << endl;
    }
    return 0;
}