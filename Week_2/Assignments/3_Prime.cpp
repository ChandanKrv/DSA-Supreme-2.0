#include <iostream> // Created by @ChandanKrV on 06 Oct, 2023.
using namespace std;
/* PROBLEM:
Q1. Check given number is Prime or not
Q2. Print All Prime Numbers form 1 to N
*/
bool isPrime(int n)
{
    if (n < 2)
        return false;

    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;

    return true;
}
void printAllPrimesFrom1toN(int n)
{
    cout << "\nPrime Numbers. : ";
    for (int i = 1; i <= n; i++)
    {
        if (isPrime(i))
            cout << i << " ";
    }
}
int main()
{
    int n = 9;
    if (isPrime(n))
        cout << n << " is Prime";
    else
        cout << n << " is Non-Prime";

    // Print all Prime numbers between 1 to 100;
    printAllPrimesFrom1toN(100);
    return 0;
}