#include <iostream> // Created by @ChandanKrV on 08 Oct, 2023.
using namespace std;
/* PROBLEM:
Convert KM to Miles:
1 KM = 0.621371 Miles
*/
int main()
{
    cout << "Enter the value for KM: ";
    float km, miles;
    cin >> km;

    miles = km * 0.621371;
    cout << km << " KM = " << miles << " Miles";
    return 0;
}
/* OUTPUT
Enter the value for KM: 67.89
67.89 KM = 42.1849 Miles
*/