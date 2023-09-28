#include <iostream> // Created by @ChandanKrV on 28 Sep, 2023.
using namespace std;
/* PROBLEM:
Numeric Star and Number Mixed Half Diamond

*/
int main()
{
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

    for (int i = 1; i <= n; i++)
    {

        count = (n * 2) - (i * 2);
        for (int j = 1; j <= 2 * (n - i) + 1; j++)
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
    return 0;
}