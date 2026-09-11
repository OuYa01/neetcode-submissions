class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int buy_price;
        int sell_price;
        int profit;
        int max_profit = 0;

        buy_price = prices[0];
        for (int i = 1; i < prices.size(); i++)
        {
            sell_price = prices[i];
            buy_price = min(sell_price, buy_price);
  
            profit = sell_price - buy_price;
            max_profit = max(max_profit, profit);

        }

        return max_profit;
    }
};
