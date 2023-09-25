#include <iostream> // Created by @ChandanKrV on 25 Sep, 2023.
using namespace std;
/* PROBLEM:
Numerical Half Pyramid:

*/
int main()
{
    int n = 6;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j <= i)
                cout << "* ";
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}