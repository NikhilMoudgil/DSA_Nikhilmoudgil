class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty()) return 0;
        //to keep track where to put the next distint element
        int insertidx=1;
        //If the current element is different from the previous one, it's unique
        for(int i=1;i<nums.size();i++){ 
            if(nums[i]!=nums[i-1]){
               nums[insertidx]=nums[i];
               insertidx++;
            }
        }
        return insertidx;
    }
};