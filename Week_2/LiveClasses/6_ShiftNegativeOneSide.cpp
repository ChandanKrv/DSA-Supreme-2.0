#include <iostream> // Created by @ChandanKrV on 11 Oct, 2023.
using namespace std;
/* PROBLEM:
Sort an array in such a way that all -ve element must be in left side
and right +ve element right side.
*/
int main()
{
    int arr[] = {-23, 5, 12, -56, 34, -7, 56, -24};
    int n = sizeof(arr) / sizeof(arr[0]);
    int j = 0; // J indicates : Place where I can keep -ve value
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
/* OUTPUT
-23 -56 -7 -24 34 12 56 5
*/