#include <iostream> // Created by @ChandanKrV on 24 Sep, 2023.
using namespace std;
/* PROBLEM:
Inverted Half Pyramid:
123456
12345
1234
123
12
1
*/
int main()
{
    int n = 6;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n + 1 - i; j++)
            cout << j;
        cout << endl;
    }
    return 0;
}