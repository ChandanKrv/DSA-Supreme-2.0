#include <iostream> // Created by @ChandanKrV on 25 Sep, 2023.
using namespace std;
/* PROBLEM:
Numerical Full Pyramid:
       1
      2 3 2
    3 4 5 4 3
  4 5 6 7 6 5 4
5 6 7 8 9 8 7 6 5
*/
int main()
{
    int n = 5, count;
    for (int i = 1; i <= n; i++)
    { // For Spaces
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        // For Numbers
        count = i;
        for (int j = 1; j <= 2 * i - 1; j++)
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