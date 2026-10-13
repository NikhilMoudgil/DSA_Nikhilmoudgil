class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> roman = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
        int number=0;
        int n=s.length();
        for(int i=0;i<n;i++){
            // If the current value is less than the next value, subtract it
            if (i < n - 1 && roman[s[i]] < roman[s[i + 1]]) {
                number -= roman[s[i]];
            } 
            // Otherwise, add it to the total
            else {
                number += roman[s[i]];
            }
        }
        return number;
    }
};