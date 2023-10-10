#include <iostream> // Created by @ChandanKrV on 10 Oct, 2023.
using namespace std;
/* PROBLEM:
Print All Triplets
*/
int main()
{
    int arr[] = {10, 20, 30};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            for (int k = 0; k < n; k++)
                cout << "(" << arr[i] << "," << arr[j] << "," << arr[k] << ")";

        cout << endl;
    }

    return 0;
}
/* OUTPUT
(10,10,10)(10,10,20)(10,10,30)(10,20,10)(10,20,20)(10,20,30)(10,30,10)(10,30,20)(10,30,30)
(20,10,10)(20,10,20)(20,10,30)(20,20,10)(20,20,20)(20,20,30)(20,30,10)(20,30,20)(20,30,30)
(30,10,10)(30,10,20)(30,10,30)(30,20,10)(30,20,20)(30,20,30)(30,30,10)(30,30,20)(30,30,30)
*/