#include <iostream> // Created by @ChandanKrV on 11 Oct, 2023.
using namespace std;
/* PROBLEM:
Leecode 75: Sort Colors
Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.
We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.
You must solve this problem without using the library's sort function.

Example 1:
Input: nums = [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]

Example 2:
Input: nums = [2,0,1]
Output: [0,1,2]

Constraints:
n == nums.length
1 <= n <= 300
nums[i] is either 0, 1, or 2.
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