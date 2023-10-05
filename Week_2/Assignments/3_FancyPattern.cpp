#include <iostream> // Created by @ChandanKrV on 05 Oct, 2023.
using namespace std;
/* PROBLEM:
Fancy Pattern 3:

*/
int main()
{
    int n = 6;
    for (int i = 0; i < n; i++)
    {
        int c = 1;
        for (int j = 0; j < i; j++)
        {
            cout << c;
            if (j>=i)
                c--;
            else
                c++;
        }
        cout << endl;
    }
    return 0;
}