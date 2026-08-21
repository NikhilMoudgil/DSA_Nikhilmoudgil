// buy and sell stocks
//  Logic ->
/*
1.we will try to buy the stock at minimum price
and try to sell it at maximum price  .
Buying and selling should be on different day and sell should be after a day of buying

1.eachday == sell day
2.bestbuy{ minimum }(an array which contain bestbuy for each day)loop i=0, i= n-1
bestbuy[i]= min(bestbuy[i-1],prices[i-1])
3.we can calculate profit -> selling price - buying price
4. create profit array for each day and find the best profit one / Maximum profit




*/
#include <iostream>
#include <climits>
using namespace std;
void maxprofit(int *prices, int n)
{
    int bestbuy[100000];
    bestbuy[0] = INT_MAX;
    for (int i = 1; i < n; i++)
    {
        bestbuy[i] = min(bestbuy[i-1], prices[i-1]);
        //cout << bestbuy[i] << ",";
    }
    int maxProfit=0;
    for (int i = 0; i < n; i++)
    {
       int currprofit = prices[i]-bestbuy[i];
       maxProfit =max(maxProfit,currprofit);
    }
    
    cout<<"Max Profit ="<<maxProfit << endl;
}
int main()
{
    int prices[6] = {7,6,4,3,2,10};
    int n = sizeof(prices) / sizeof(int);
    maxprofit(prices, n);
    return 0;
}
