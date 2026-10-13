class Solution {
public:
    string intToRoman(int num) {
        // Pairs of values and their Roman numeral symbols in descending order
        vector<pair<int, string>> roman = {
            {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
            {100, "C"},  {90, "XC"},  {50, "L"},  {40, "XL"},
            {10, "X"},   {9, "IX"},   {5, "V"},   {4, "IV"},
            {1, "I"}
        };
        
        string result = "";
        
        for (auto const& [value, symbol] : roman) {
            // While the number is greater than or equal to the current Roman value
            while (num >= value) {
                result += symbol; // Append the symbol to our result string
                num -= value;     // Reduce the number by that value
            }
        }
        
        return result;
    }
};