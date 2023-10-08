#include <iostream> // Created by @ChandanKrV on 08 Oct, 2023.
using namespace std;
/* PROBLEM:
Create Number Using Digits:
*/
int main()
{
    int noOfdigits;
    cout << "Enter no. of digits: ";
    cin >> noOfdigits;
    int ans = 0;
    for (int i = 0; i < noOfdigits; i++)
    {
        int theDigit;
        cout << "Enter digit: ";
        cin >> theDigit;
        ans = ans * 10 + theDigit;
    }
    cout << "Number became: " << ans;
}
/* OUTPUT
Enter no. of digits: 4
Enter digit: 5
Enter digit: 8
Enter digit: 3
Enter digit: 0
Number became: 5830
*/