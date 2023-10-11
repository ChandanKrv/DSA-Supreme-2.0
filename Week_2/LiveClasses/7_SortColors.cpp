#include <iostream> // Created by @ChandanKrV on 11 Oct, 2023.
using namespace std;
/* PROBLEM:
Leecode 75:
*/
int main()
{
    int nums[] = {2, 0, 2, 1, 1, 0};
    int n = sizeof(nums) / sizeof(nums[0]);
    int index = 0;
    int left = 0;
    int right = n - 1;

    while (index <= right)
    {
        if (nums[index] == 0)
        {
            swap(nums[index], nums[left]);
            index++;
            left++;
        }
        else if (nums[index] == 2)
        {
            swap(nums[index], nums[right]);
            /* CATCH: No need of index++, because we are not sure
                about nums[right] value, it might be 0 or 1 so we need
                to check again for the same iteration. */
            right--;
        }
        else
        { // This is for:- nums[index] == 1
            index++;
        }
    }

    for (int i = 0; i < n; i++)
        cout << nums[i] << " ";

    return 0;
}
/* OUTPUT
0 0 1 1 2 2 
*/