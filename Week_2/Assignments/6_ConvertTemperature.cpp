#include <iostream> // Created by @ChandanKrV on 08 Oct, 2023.
#include <vector>
using namespace std;
/* PROBLEM:
Convert The Temperature : Leetcode 2469.
*/
vector<double> convertTemp(double celsius)
{
    double K = celsius + 273.15;
    double F = celsius * 1.80 + 32.00;
    vector<double> v;
    v.push_back(K);
    v.push_back(F);
    return v;
}
int main()
{
    for (auto i : convertTemp(36.50))
        cout << i << " ";
    return 0;
}
/* OUTPUT
309.65 97.7
*/