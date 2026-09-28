class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int d=-1,m=-1;
        int n = nums.size();
        for(int i=0;i<=n;i++){
            int count=0;
            for(int j=0;j<n;j++){
                if(nums[j]==i){
                    count++;
                }
            }
            if(count==0){
                m =i;
            }
            if(count==2){
              d=i;
            }
        }
        return{d ,m};
    }
};