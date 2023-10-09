#include <iostream> // Created by @ChandanKrV on 09 Oct, 2023.
using namespace std;
/* PROBLEM:
Print Reverse Counting:
*/
void printNow(int n)
{ // Base Case
    if (n == 1)
    {
        cout << 1;
        return;
    }
    // Processing
    cout << n << " ";
    // Recursive Call
    printNow(n - 1);
}
int main()
{
    printNow(9);

    return 0;
}
/* OUTPUT

*/