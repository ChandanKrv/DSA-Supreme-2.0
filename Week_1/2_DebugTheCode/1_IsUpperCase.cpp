#include <iostream> // Created by @ChandanKrV on 24 Sep, 2023.
using namespace std;
/* PROBLEM:
Debug the code. Take input a character, print 1, if its a capital alphabet, print 0, if its a lowercase alphabet, else print -1.
*/
int main()
{
    char c;
    cin >> c;
    if ('a' <= c and c <= 'z')
    {
        cout << 0;
    }
    else if ('A' <= c and c <= 'Z')
    {
        cout << 1;
    }
    else
    {
        cout << -1;
    }
    return 0;
}
/* OUTPUT
G
1
*/