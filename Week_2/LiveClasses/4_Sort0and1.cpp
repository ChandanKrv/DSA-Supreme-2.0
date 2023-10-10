#include <iostream> // Created by @ChandanKrV on 10 Oct, 2023.
using namespace std;
/* PROBLEM:
Sort 0's and 1's of array
*/
int main()
{
    int arr[] = {0, 1, 0, 1, 1, 0, 1, 0, 0, 1, 0, 1, 0, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    int countZeros = 0;
    for (int i = 0; i < n; i++)
        if (arr[i] == 0)
            countZeros++;

    int arrAns[n];

    for (int i = 0; i < n; i++)
        if (i < countZeros)
            arrAns[i] = 0;
        else
            arrAns[i] = 1;

    for (int i = 0; i < n; i++)
        cout << arrAns[i] << " ";

    return 0;
}
/* OUTPUT
0 0 0 0 0 0 0 0 1 1 1 1 1 1
*/