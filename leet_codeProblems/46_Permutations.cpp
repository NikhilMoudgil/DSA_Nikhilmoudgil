class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        int n = nums.size();
        if(nums.empty()){
           return{};
        }
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());
        do {
            result.push_back(nums);
        } while (next_permutation(nums.begin(), nums.end()));
         
        return result;
    }
};

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        if (nums.empty()) return {};
        
        vector<vector<int>> current_permutations = {{}};
        
        for (int num : nums) {
            vector<vector<int>> next_permutations;
            
            for (const auto& p : current_permutations) {
                for (int i = 0; i <= p.size(); ++i) {
                    vector<int> new_permutation = p;
                    new_permutation.insert(new_permutation.begin() + i, num);
                    next_permutations.push_back(new_permutation);
                }
            }
            current_permutations = move(next_permutations);
        }
        return current_permutations;
    }
};