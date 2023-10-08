#include <iostream> // Created by @ChandanKrV on 08 Oct, 2023.
using namespace std;
/* PROBLEM:
Print all digits of the number:
*/
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    while (n)
    {
        int rem = n % 10;
        cout << rem << ", ";
        n /= 10;
    }

    return 0;
}
/* OUTPUT

*/