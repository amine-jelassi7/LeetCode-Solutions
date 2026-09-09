class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = INT_MAX;
        int profit = 0;

        for (int price : prices) {
            min = std::min(min, price);
            profit = std::max(profit, price - min);
        }

        return profit;

    }
};