//single pointer approach
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k=0;
        for(int i=0;i<nums.size();i++){
           if(nums[i]!=val){
            nums[k]=nums[i];
            k++;
           }
        }return k;
    }
};
//two pointer approach
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0;
        int n = nums.size(); // Represents the current "valid" size of the array
        
        while (i < n) {
            if (nums[i] == val) {
                // Overwrite the current element with the last element
                nums[i] = nums[n - 1];
                // Reduce the valid size of the array
                n--; 
            } else {
                // Only increment 'i' if we didn't swap, 
                // because the newly swapped element needs to be checked too
                i++;
            }
        }
        
        return n;
    }
};