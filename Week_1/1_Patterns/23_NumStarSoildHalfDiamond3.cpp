#include <iostream> // Created by @ChandanKrV on 28 Sep, 2023.
using namespace std;
/* PROBLEM:
Numeric Star and Number Mixed Half Diamond:

*/
int main()
{ // Not done
    int n = 4, count;
    for (int i = 1; i <= n; i++)
    {
        count = 1;
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if ((j == 1) or ((j % 2 != 0) and (j == 2 * i - 1)))
            {
                cout << "*";
            }
            else
            {
                cout << count;
                if (i <= j)
                    count--;
                else
                    count++;
            }
        }
        cout << endl;
    }

    for (int i = 1; i <= n; i++)
    {
        count = 1;
        for (int j = 1; j <= n - i; j++)
        {
            if ((j == 1) or ((j % 2 != 0) and (j == n - i)))
            {
                cout << "*";
            }
            else
            {
                cout << count;
                if (i == n - j)
                    count--;
                else
                    count++;
            }
        }
        cout << endl;
    }
    return 0;
}