class Solution {
public:
    int search(vector<int>& nums, int target) {
        int si = 0;
        int ei = nums.size() - 1;

        while (si <= ei) {
            int mid = si + (ei - si) / 2;

            if (nums[mid] == target) {
                return mid;
            }

            // Left half is sorted
            if (nums[si] <= nums[mid]) {
                if (nums[si] <= target && target < nums[mid]) {
                    ei = mid - 1; // Search left
                } else {
                    si = mid + 1; // Search right
                }
            } 
            // Right half is sorted
            else {
                if (nums[mid] < target && target <= nums[ei]) {
                    si = mid + 1; // Search right
                } else {
                    ei = mid - 1; // Search left
                }
            }
        }

        return -1;
    }
};