#include <iostream> // Created by @ChandanKrV on 07 Oct, 2023.
using namespace std;
/* PROBLEM:
Reverse Integer : Leetcode Problem 7.
*/

int main()
{
    int n;
    cout << "Enter a number ";
    cin >> n;
    int ans = 0;

    if (n <= INT_MIN)
        return 0;

    bool isNegative = false;
    if (n < 0)
    {
        isNegative = true;
        n = -n;
    }

    while (n > 0)
    {
        if (ans > INT_MAX / 10)
            return 0;
        int rem = n % 10;
        ans = ans * 10 + rem;
        n = n / 10;
    }
    if (isNegative)
        cout << -ans;
    else
        cout << ans;
    // cout << (isNegative ? -ans : ans);
    return 0;
}
/* OUTPUT

*/