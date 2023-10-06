#include <iostream>
using namespace std;
/* PROBLEM: Fancy Pattern 2:-
Enter the no. of rows: 4
1
2*3
4*5*6
7*8*9*10
7*8*9*10
4*5*6
2*3
1
*/
int main()
{
    int n = 4, c = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << c;
            c++;
            if (j < i)
                cout << "*";
        }
        cout << endl;
    }
    // Shrinking Phase
    int start = c - n;
    for (int i = 0; i < n; i++)
    {
        int k = start;
        for (int j = 0; j <= n - i - 1; j++)
        {
            cout << k;
            k++;
            if (j < n - i - 1)
                cout << "*";
        }
        start = start - (n - i - 1);
        cout << endl;
    }
    return 0;
}