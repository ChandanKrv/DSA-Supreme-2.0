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
    int n, c = 1;
    cout << "Enter the no. of rows: ";
    cin >> n;
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
    // Shrinking phase
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

/* #include <iostream> // Created by @ChandanKrV on 28 Sep, 2023.
using namespace std;
/* PROBLEM:
Numeric Star and Number Mixed Half Diamond

*/
/*
int main()
{//Need to Imporve the logic, Not working for n=5
    int n = 4, count = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if ((j ^ 1) == (j + 1))
                cout << "*";
            else
            {
                cout << count;
                count++;
            }
        }
        cout << endl;
    }
    count = (n * 2) - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (2 * n) - (2 * i) + 1; j++)
        {
            if ((j ^ 1) == (j + 1))
                cout << "*";
            else
            {
                cout << count;
                count++;
            }
        }
        cout << endl;
        count = (count - 2) / 2;
    }

    return 0;
} */