class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int st=0, end=numbers.size()-1;
        while(st<end){
             int csum=numbers[st] + numbers[end];
            if(csum==target){
                return {st + 1, end + 1};
            }else if(csum>target){
                end--;
            }else{
                st++;
            }
        }
        return {};
    }
};