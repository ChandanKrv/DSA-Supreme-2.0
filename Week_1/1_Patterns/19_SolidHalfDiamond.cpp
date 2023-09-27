#include <iostream> // Created by @ChandanKrV on 27 Sep, 2023.
using namespace std;
/* PROBLEM:
Solid Half Diamond:
*
* *
* * *
* * * *
* * * * *
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
    //For upper half
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    //For lower half
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}