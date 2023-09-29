#include <iostream> // Created by @ChandanKrV on 29 Sep, 2023.
using namespace std;
/* PROBLEM:
Pascal’s Triangle
*/
int main()
{ // Not done
    int n = 6;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j == 1 or j == i)
                cout << 1;
            else
                cout << "*";
        }
        cout << endl;
    }
    return 0;
}