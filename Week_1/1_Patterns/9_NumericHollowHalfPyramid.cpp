#include <iostream> // Created by @ChandanKrV on 24 Sep, 2023.
using namespace std;
/* PROBLEM:
Numeric Hollow Half Pyramid:
1
1 2
1   3
1     4
1       5
1 2 3 4 5 6
*/
int main()
{
    int n = 6;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j == 1 or i == n or j == i)
                cout << j << " ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    return 0;
}