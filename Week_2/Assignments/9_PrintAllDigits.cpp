#include <iostream> // Created by @ChandanKrV on 08 Oct, 2023.
#include <vector>
using namespace std;
/* PROBLEM:
Print all digits of the number:
*/
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    vector<int> v;

    while (n)
    {
        int rem = n % 10;
        v.push_back(rem);
        // cout << rem << ", ";
        n /= 10;
    }
    // Print Vector in Reverse order
    cout << "Digits are: ";
    for (int i = v.size() - 1; i >= 0; i--)
        cout
            << v[i] << ", ";
    // OR
    /*  for (auto i = v.end() - 1; i >= v.begin(); i--)
           cout << *i << ", ";
        */
    return 0;
}
/* OUTPUT
Enter the number: 8675
Digits are: 8, 6, 7, 5,
*/