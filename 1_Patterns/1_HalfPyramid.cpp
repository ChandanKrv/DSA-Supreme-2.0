#include <iostream> // Created by @ChandanKrV on 23 Sep, 2023.
using namespace std;
/* PROBLEM:
Half Pyramid
    *
    **
    ***
    ****
    *****
    ******
*/
int main()
{
    int rows = 6;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
            cout << "*";
        cout << endl;
    }
    
    return 0;
}
