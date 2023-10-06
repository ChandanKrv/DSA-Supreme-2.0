#include <iostream> // Created by @ChandanKrV on 29 Sep, 2023.
using namespace std;
/* PROBLEM:
Pascal’s Triangle :
Using Binomial Coefficient : c = c * (i - j) / j;
Note: i and j index must be start from 1, not from 0
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
1 5 10 10 5 1
*/
int main()
{
    int n = 6;
    for (int i = 1; i <= n; i++)
    {
        int c = 1;
        for (int j = 1; j <= i; j++)
        {
            cout << c << " ";
            c = c * (i - j) / j;
        }
        cout << endl;
    }
    return 0;
}