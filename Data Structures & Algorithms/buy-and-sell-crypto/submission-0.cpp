class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int> profit;
        for(int i = 0; i < prices.size(); i++) {
            int j = i + 1;
            while(j < prices.size()) {
                if(prices[i] < prices[j])
                    profit.push_back(prices[j] - prices[i]);
                j++;
            }
        }
        if(profit.size() == 0) {
            return 0;
        }
        int res = *max_element(profit.begin(), profit.end());
        return res;
    }
};
