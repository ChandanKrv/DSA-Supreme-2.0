#include <iostream> // Created by @ChandanKrV on 29 Sep, 2023.
using namespace std;
/* PROBLEM:
Numeric Half Pyramid:
1
23
456
78910
1112131415
161718192021
*/
int main()
{
    int n = 6, count = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << count;
            count++;
        }
        cout << endl;
    }
    return 0;
}