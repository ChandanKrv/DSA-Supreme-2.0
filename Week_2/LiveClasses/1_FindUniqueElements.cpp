#include <iostream> // Created by @ChandanKrV on 08 Oct, 2023.
using namespace std;
/* PROBLEM:
Print unique elements of the given array.
*/
int main()
{
    int arr[] = {10, 2, 11, 10, 2, 13, 15, 13, 15};
    int n = sizeof(arr) / sizeof(int);
    int ans = 0;
    for (int i = 0; i < n; i++)
        ans = ans ^ arr[i];

    cout << "Enqiue element is: " << ans;
    return 0;
}
/* OUTPUT
Enqiue element is: 11
*/