class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
       int st=0,end=nums.size()-1;
       while (st <= end)
       {
          int mid = st+(end-st)/2;
         if (nums[mid] == target)
         {
            return mid;
         }
        else if (nums[mid] < target)
         {
            // 2nd half
            st = mid + 1;
         }
        else
         {
             // first half
            end = mid - 1;
         }
      }
      return st;
    }
};