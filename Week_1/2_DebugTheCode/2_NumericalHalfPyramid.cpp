#include <iostream> // Created by @ChandanKrV on 24 Sep, 2023.
using namespace std;
/* PROBLEM:
Debug the code. It is trying to print the given pattern.
1
23
345
4567
*/

int main()
{
    int n = 7;
    int i = 1;
    while (i < n)
    {
        int j = i, count = 1;
        while (i <= n)
        {
            cout << j;
            j = j + 1;
            count = count + 1;
        }
        cout << "\n";
        i = i + 1;
    }
    return 0;
}