#include <iostream>
#include <assert.h>
using namespace std;
/* PROBLEM: Fancy Pattern 1:-
Enter the no. of rows: 5
********1********
*******2*2*******
******3*3*3******
*****4*4*4*4*****
****5*5*5*5*5****
*/
int main()
{
    int n;
    cout << "Enter the no. of rows: ";
    cin >> n;
    assert(n <= 9); // used to test assumptions made by programmers.
    for (int i = 0; i < n; i++)
    {
        int startNumIndex = 8 - i;
        int num = i + 1;
        int countNum = num;
        for (int j = 0; j < 17; j++)
        {
            if (startNumIndex == j && countNum > 0)
            {
                cout << num;
                startNumIndex += 2;
                countNum--;
            }
            else
                cout << "*";
        }
        cout << endl;
    }
    return 0;
}
/*
#include <iostream> // Created by @ChandanKrV on 26 Sep, 2023.
using namespace std;
/* PROBLEM:
Numeric Star Square Pattern:
********1********
*******2*2*******
******3*3*3******
*****4*4*4*4*****
****5*5*5*5*5****
*/
/*
int main()
{ //MyCode (Working)
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        // For Starting Stars
        for (int j = 1; j <= n + 4 - i; j++)
        {
            cout << "*";
        }

        // For Number and Star mixed
        for (int j = 1; j <= i; j++)
            cout << i << "*";

        // For Ending Stars
        for (int j = 1; j <= n + 3 - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
*/