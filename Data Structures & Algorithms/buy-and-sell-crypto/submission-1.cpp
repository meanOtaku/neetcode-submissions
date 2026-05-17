class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left = 0;
        int profit = 0;
        for(int i = 1; i < prices.size(); i++) {
            if(prices[i] < prices[left]) {
                left = i;
            }
            profit = max(prices[i] - prices[left], profit);
        }
        return profit;
    }
};
