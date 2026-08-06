class Solution {
   public:
    int maxProfit(vector<int>& prices) {
        int globalMin = prices[0], maxProfit = 0;
        for (int i = 1; i < prices.size(); ++i) {
            globalMin = min(globalMin, prices[i]);
            maxProfit = max(maxProfit, prices[i]-globalMin);
        }

        return maxProfit;
    }
};
