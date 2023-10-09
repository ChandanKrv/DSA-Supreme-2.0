#include <iostream> // Created by @ChandanKrV on 09 Oct, 2023.
using namespace std;
/* PROBLEM:
Find Factorial using Recursion
*/
int factroial(int n)
{
    // base case
    if (n == 1 || n == 0)
        return 1;

    // Processing

    // Recursive Call
    int recursiveAns = factroial(n - 1);

    return n * recursiveAns;
}

int main()
{
    cout << factroial(5);

    return 0;
}
/* OUTPUT

*/