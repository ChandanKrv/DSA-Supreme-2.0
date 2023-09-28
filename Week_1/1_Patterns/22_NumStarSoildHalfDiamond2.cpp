#include <iostream> // Created by @ChandanKrV on 28 Sep, 2023.
using namespace std;
/* PROBLEM:
Numeric Star and Number Mixed Half Diamond

*/
int main()
{//Need to Imporve the logic, Not working for n=5
    int n = 4, count = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if ((j ^ 1) == (j + 1))
                cout << "*";
            else
            {
                cout << count;
                count++;
            }
        }
        cout << endl;
    }
    count = (n * 2) - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (2 * n) - (2 * i) + 1; j++)
        {
            if ((j ^ 1) == (j + 1))
                cout << "*";
            else
            {
                cout << count;
                count++;
            }
        }
        cout << endl;
        count = (count - 2) / 2;
    }

    return 0;
}