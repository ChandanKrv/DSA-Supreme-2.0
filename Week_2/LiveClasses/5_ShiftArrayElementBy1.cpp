#include <iostream> // Created by @ChandanKrV on 10 Oct, 2023.
using namespace std;
/* PROBLEM:
Shift Array Elements by 1:
*/
void towardsRight(int *arr, int n)
{
    int lastElement = arr[n - 1];
    for (int currIndex = n - 1; currIndex >= 0; currIndex--)
    {
        int prevElement = arr[currIndex - 1];
        arr[currIndex] = prevElement;
    }
    arr[0] = lastElement;

    cout << "Towards Right by 1 Element:" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void towardsLeft(int *arr, int n)
{
    int firstElement = arr[0];
    for (int currIndex = 0; currIndex < n; currIndex++)
    {
        int nextElement = arr[currIndex + 1];
        arr[currIndex] = nextElement;
    }
    arr[n - 1] = firstElement;
    cout << "Towards Left by 1 Element:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = sizeof(arr) / sizeof(arr[0]);
    towardsRight(arr, n);
    // towardsLeft(arr, n);
    return 0;
}
/* OUTPUT
Towards Right by 1 Element:
60 10 20 30 40 50
*/