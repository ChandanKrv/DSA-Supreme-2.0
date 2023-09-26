#include <iostream> // Created by @ChandanKrV on 24 Sep, 2023.
using namespace std;
/* PROBLEM:
Numeric Half Pyramid
1 
1 2
1 2 3
1 2 3 4
1 2 3 4 5
1 2 3 4 5 6
*/
int main()
{
    int n = 6;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j <= i)
                cout << j << " ";      
        }
        cout << "\n";
    }
    return 0;
}