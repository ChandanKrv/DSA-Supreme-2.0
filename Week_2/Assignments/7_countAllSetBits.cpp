#include <iostream> // Created by @ChandanKrV on 08 Oct, 2023.
using namespace std;
/* PROBLEM:
Count All Set Bits:
*/
int countSetBitsUsingBitwise(int n)
{
    int count = 0;
    while (n)
    {
        // If we do bitwise AND with any number and 1 we get LSB
        //(Least Significant Bit) i.e Right most bit.
        int bit = (n & 1);
        if (bit == 1)
            count++;
        n = n >> 1;
    }
    return count;
}

int countSetBits(int n)
{ // Normal Method
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
    cout << n << " has " << countSetBits(n) << " set bits." << endl;
    int m = 7;
    cout << m << " has " << countSetBitsUsingBitwise(m) << " set bits.";
    return 0;
}
/* OUTPUT
10 has 2 set bits.
7 has 3 set bits.
*/