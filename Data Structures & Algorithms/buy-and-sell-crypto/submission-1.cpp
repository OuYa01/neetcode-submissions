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
            profit = sell_price - buy_price;

            if (profit < buy_price)
            {
                buy_price = prices[i];
            }

            if (profit > max_profit)
                max_profit = profit;

        }
        

        return max_profit;
    }
};
