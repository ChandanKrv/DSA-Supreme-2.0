#include <iostream>
using namespace std;
/* PROBLEM:
Fancy Pattern 3:
    *
    * 1 *
    * 1 2 1 *
    * 1 2 3 2 1 *
    * 1 2 1 *
    * 1 *
    *
*/
int main()
{
    int n = 5;
    cout << "*" << endl;
    for (int i = 0; i < n; i++)
    {
        // First Statement of ternary op. is for Growing Phase
        int cond = i <= n / 2 ? 2 * i : 2 * (n - i - 1);
        cout << "*"
             << " ";
        for (int j = 0; j <= cond; j++)
        {
            if (j <= cond / 2)
                cout << j + 1 << " ";
            else
                cout << cond - j + 1 << " ";
        }
        cout << "*";
        cout << endl;
    }
    cout << "*";
    return 0;
}