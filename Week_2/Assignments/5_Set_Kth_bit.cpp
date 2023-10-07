#include <iostream> // Created by @ChandanKrV on 07 Oct, 2023.
using namespace std;
/* PROBLEM:
Set Kth Bit : GeekforGeeks Problem
*/
int setKthBit(int n, int k)
{
    int mask = 1 << k; // Left Shift for 1 up to kth bit
    return (n | mask);
}
int main()
{
    cout << setKthBit(10, 2);
    return 0;
}