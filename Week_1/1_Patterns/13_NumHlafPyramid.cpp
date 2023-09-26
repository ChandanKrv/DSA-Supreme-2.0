#include <iostream> // Created by @ChandanKrV on 25 Sep, 2023.
using namespace std;
/* PROBLEM:
Numerical Half Pyramid:
1 
1 2 1
1 2 3 2 1
1 2 3 4 3 2 1
1 2 3 4 5 4 3 2 1
1 2 3 4 5 6 5 4 3 2 1 
*/
int main()
{
    int n = 6, count;
    for (int i = 1; i <= n; i++)
    {
        count = 1;
        for (int j = 1; j <= i * 2 - 1; j++)
        {
            cout << count << " ";
            if (j <= i - 1)
                count++;
            else
                count--;
        }
        cout << endl;
    }
    return 0;
}