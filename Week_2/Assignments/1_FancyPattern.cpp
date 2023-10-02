#include <iostream> // Created by @ChandanKrV on 02 Oct, 2023.
#include <assert.h>
using namespace std;
/* PROBLEM:
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