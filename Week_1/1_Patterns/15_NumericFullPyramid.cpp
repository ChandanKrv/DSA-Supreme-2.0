#include <iostream> // Created by @ChandanKrV on 26 Sep, 2023.
using namespace std;
/* PROBLEM:
Numeric Full Pyramid:
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
        // For Spaces
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }

        // For Stars
        count = 1;
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
}