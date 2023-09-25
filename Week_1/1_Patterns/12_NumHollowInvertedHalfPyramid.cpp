#include <iostream> // Created by @ChandanKrV on 25 Sep, 2023.
using namespace std;
/* PROBLEM:
Numerical Hollow Inverted Half Pyramid:
1 2 3 4 5 6 
2       6
3     6
4   6
5 6
6
*/
int main()
{
    int n = 6;
    int count;
    for (int i = 1; i <= n; i++)
    {
        count = i;
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 or j == 1 or j == (n + 1 - i))
                cout << count << " ";
            else
                cout << "  ";
            count++;
        }
        cout << endl;
    }
    return 0;
}