#include <iostream>
using namespace std;
int search(int *nums, int n, int target)
{
    int st = 0, end = n - 1;
    while (st <= end)
    {
        int mid = (st + end) / 2;
        if (nums[mid] == target)
        {
            return mid;
        }
         if (nums[st] <=nums[mid]){
            if(nums[st]<= target && target<nums[mid]){
                end=mid-1;
            }
            else{
                st=mid+1;
            }
          
        }
        else
        {
            if(nums[end]>=target && target>nums[mid]){
                st=mid+1;
            }
            else{
                end=mid-1;
            }
        }
    }
    return -1;
}
int main()
{
    int nums[] = {4, 5, 6, 7, 0, 1, 2};
    int n = sizeof(nums) / sizeof(int);

    cout << search(nums, n, 0);

    return 0;
}