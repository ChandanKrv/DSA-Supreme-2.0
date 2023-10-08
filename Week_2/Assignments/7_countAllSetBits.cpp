#include <iostream> // Created by @ChandanKrV on 08 Oct, 2023.
using namespace std;
/* PROBLEM:
Count All Set Bits:
*/
int countSetBits(int n)
{
    int count = 0;
    while (n)
    {
        if (n % 2 == 1)
            count++;
        n = n / 2;
    }
    return count;
}
int main()
{
    int n = 10;
    cout << n << " has " << countSetBits(n) << " set bits.";
    return 0;
}
/* OUTPUT
10 has 2 set bits.
*/