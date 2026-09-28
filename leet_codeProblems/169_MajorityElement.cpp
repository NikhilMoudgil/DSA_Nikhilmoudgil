class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate=0;
        int count=0;
        for(int x:nums)
            candidate=x;
           }
           if(candidate==x){
            count++;
           }
           else{
            count--;
           }
        }
        return candidate;
    }
};