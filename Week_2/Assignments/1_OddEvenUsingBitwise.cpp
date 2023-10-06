#include <iostream> // Created by @ChandanKrV on 06 Oct, 2023.
using namespace std;
/* PROBLEM:
Check given number is Even or Odd using different methods
*/
void usingModulus(int n)
{
    // Using modulus operator or Normal method
    if (n % 2 == 0)
        cout << n << " is Even" << endl;
    else
        cout << n << " is Odd" << endl;
}
void usingBitwiseXOR(int n)
{
    /* The logic is simple. If the bits are the same, the result is 0.
    If the bits are different, the result is 1.
   As we know bitwise XOR Operation increment the number by 1 if the is
   even otherwise it decrements by 1.

   Number = 7
        7 in binary : 1 1 1
        1 in binary : 0 0 1
      -----XOR---------------
        6 in binary : 1 1 0
    XOR with odd(7) decreased the number by 1

   Number = 10
        10 in binary : 1 0 1 0
        1 in binary  : 0 0 0 1
      -----XOR------------------
        11 in binary : 1 0 1 1
    XOR with Even(11) increased the number by 1

    */
    if ((n ^ 1) == (n + 1))
        cout << n << " is Even" << endl;
    else
        cout << n << " is Odd" << endl;
}

void usingBitwiseAND(int n)
{
    /*
    As we know bitwise AND Operation of a Number by 1 will be 1,
    After AND operation with the number if we get 1 that means
    number is Odd else Even.
    */
    if (!(n & 1))
        cout << n << " is Even" << endl;
    else
        cout << n << " is Odd" << endl;
}
void usingBitwiseOR(int n)
{
    /*
    If the last bit is set then the number is odd, otherwise even.
    As we know bitwise OR Operation of the Number by 1 increment the value
    of the number by 1 if the number is even otherwise it will remain unchanged.

    Number = 7
        7 in binary : 1 1 1
        1 in binary : 0 0 1
      -----OR-----------------
        7 in binary : 1 1 1
    OR with odd(7) value remain unchanged

   Number = 10
        10 in binary : 1 0 1 0
        1 in binary  : 0 0 0 1
      -----OR------------------
        11 in binary : 1 0 1 1
    OR with Even(11) increased the number by 1
    */
    if ((n | 1) == (n + 1))
        cout << n << " is Even" << endl;
    else
        cout << n << " is Odd" << endl;
}

void usingLeftRightShift(int n)
{
    /*
    We can determine if a number is even or odd by checking
    if it remains the same after a bitwise right shift followed by
    a bitwise left shift. If the number is even, it will stay unchanged;
    if it's odd, it will change.

    Number: 7 (Binary: 0111)

        Operation       Result (Binary)   Result (Decimal)
        ---------------------------------------------------
        Initial Value   0111              7
        Right Shift     0011              3
        Left Shift      0110              6

    Number: 10 (Binary: 1010)
        Operation       Result (Binary)   Result (Decimal)
        ---------------------------------------------------
        Initial Value   1010              10
        Right Shift     0101              5
        Left Shift      1010              10

In the case of 7 (an odd number), the value changes after the right and left shifts,
while for 10 (an even number), the value remains the same.
    */

    if (n == (n >> 1) << 1)
        cout << n << " is Even" << endl;
    else
        cout << n << " is Odd" << endl;
    // Below is short hand
    /*
    n == (n >> 1) << 1 ? cout << n << " is Even."
               << endl : cout << n << " is Odd." << endl;
     */
}
int main()
{
    usingModulus(12);
    usingBitwiseXOR(-7);
    usingBitwiseAND(89);
    usingBitwiseOR(42);
    usingLeftRightShift(-10);
    return 0;
}
/* OUTPUT
12 is Even
-7 is Odd
89 is Odd
42 is Even
-10 is Even
*/