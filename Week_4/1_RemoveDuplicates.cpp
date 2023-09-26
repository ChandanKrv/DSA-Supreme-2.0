#include <iostream> // Created by @ChandanKrV on 25 Sep, 2023.
using namespace std;
/* PROBLEM:
LeetCode: 1047,
Remove All Duplicated fromString
INPUT: azxxzy
OUTPUT: zy
*/
bool isExists(string s, char ch)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ch)
            return true;
    }
    return false;
}

int main()
{
    string s = "azxxzy";
    string ans = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (isExists(ans, s[i]))
        {

        }
    }

    return 0;
}
/* OUTPUT

*/