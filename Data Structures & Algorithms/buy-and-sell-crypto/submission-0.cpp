class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int dayMaxProfit = 0;
        int allTimeProfit = 0;

        for (int i = 0; i < prices.size(); i++) {
            dayMaxProfit = 0; // prices[i] - prices[i] aka 0 profit
            for (int j = i+1; j < prices.size(); j++) {
                int profit = prices[j] - prices[i];
                if (profit > dayMaxProfit)
                    dayMaxProfit = profit;
            }
            if (dayMaxProfit > allTimeProfit)
                allTimeProfit = dayMaxProfit;
        }
        return allTimeProfit;
    }
};
