#include <iostream> // Created by @ChandanKrV on 11 Oct, 2023.
using namespace std;
/* PROBLEM:
Leetcode: 189
*/
void usingModOperator(int *arr, int n, int k)
{ // Array Rotation Formula using Mod: (index + k) % n
  // In most of the array rotation problem mod formula is required.

    cout << "Initial Array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << "\n";

    int *ansArr = new int[n];

    for (int index = 0; index < n; index++)
    {
        int newIndex = (index + k) % n;
        ansArr[newIndex] = arr[index];
    }

    cout << "Rotated Array: ";
    for (int i = 0; i < n; i++)
        cout << ansArr[i] << " ";
}
void tempArrayApproach(int *arr, int n, int k)
{

    int *tempArr = new int[k];

    cout << "Initial Array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << "\n";

    // Storing last K elements in tempArray
    for (int i = 0; i < k; i++)
        tempArr[k - 1 - i] = arr[n - 1 - i];

    // Shifting right origial array by K
    for (int i = n - 1; i >= 0; i--)
        arr[i] = arr[i - k];

    // Adding tempArray values at begining of the array
    for (int i = 0; i < k; i++)
        arr[i] = tempArr[i];

    cout << "Rotated Array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

int main()
{
    int nums[] = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;
    int n = sizeof(nums) / sizeof(nums[0]);

    // tempArrayApproach(nums, n, k);
    /* OUTPUT:
          Initial Array: 1 2 3 4 5 6 7
          Rotated Array: 5 6 7 1 2 3 4 */

    usingModOperator(nums, n, k);
    return 0;
}
/* OUTPUT
Initial Array: 1 2 3 4 5 6 7
Rotated Array: 5 6 7 1 2 3 4
*/