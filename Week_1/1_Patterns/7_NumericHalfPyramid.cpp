#include <iostream> // Created by @ChandanKrV on 24 Sep, 2023.
using namespace std;
/* PROBLEM:
Numeric Half Pyramid
1
12
123
1234
12345
123456
*/
int main()
{
    int n = 6;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j <= i)
                cout << j;
            else
                cout << " ";
        }
        cout << "\n";
    }
    return 0;
}