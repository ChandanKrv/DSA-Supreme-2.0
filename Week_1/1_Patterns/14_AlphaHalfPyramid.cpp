#include <iostream> // Created by @ChandanKrV on 26 Sep, 2023.
using namespace std;
/* PROBLEM:
Alphabatic Half Pyramid:
A 
A B A
A B C B A
A B C D C B A
A B C D E D C B A
A B C D E F E D C B A 
*/
int main()
{
    int n = 6;
    char ch;
    for (int i = 1; i <= n; i++)
    {
        ch = 'A';
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << ch << " ";
            if (j <= i - 1)
                ch++;
            else
                ch--;
        }
        cout << endl;
    }
    return 0;
}