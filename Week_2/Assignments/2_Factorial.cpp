#include <iostream> // Created by @ChandanKrV on 06 Oct, 2023.
using namespace std;
/* PROBLEM:
Find Factorial of given number:
*/
int main()
{
    int n = 5;
    long long int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    cout << "Factorial of " << n << " is " << fact;
    return 0;
}
