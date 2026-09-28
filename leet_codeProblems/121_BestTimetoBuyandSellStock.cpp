class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int maxProfit=0;
        int bestbuy=INT_MAX;
        for(int i=0;i<prices.size();i++){
            //calcualte bestbuy for each day
           bestbuy=min(bestbuy,prices[i]);
           //calculate profit for selling at each day
           int currprofit=prices[i]-bestbuy;
           //calculate maximum profit
            maxProfit =max(maxProfit,currprofit);
        }
        return maxProfit;
    }
};