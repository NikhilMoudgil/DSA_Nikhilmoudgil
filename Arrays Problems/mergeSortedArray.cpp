class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       vector<int> temp;
       int i = 0, j = 0;
       
       // Traverse both arrays as long as BOTH have elements left
       while(i < m && j < n) {
            if(nums1[i] <= nums2[j]) {
                temp.push_back(nums1[i]);
                i++;
            } else {
                temp.push_back(nums2[j]);
                j++;
            }
       }
       
       // If elements remain in nums1, add them
       while(i < m) {
           temp.push_back(nums1[i]);
           i++;
       }
       
       // If elements remain in nums2, add them
       while(j < n) {
           temp.push_back(nums2[j]);
           j++;
       }
       
       // Copy back to nums1
       for(int idx = 0; idx < temp.size(); idx++) {
            nums1[idx] = temp[idx];
       }
    }
};