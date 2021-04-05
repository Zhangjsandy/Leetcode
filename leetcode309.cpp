class Solution {
public:
    int maxProfit(vector<int>& prices) {
 // 动态规划，每天三种状态，买入，卖出和等待状态
        int n = prices.size();
        // f[i][0]: 手上持有股票的最大收益(今天买入或更早买入, f[i][0] = max(f[i-1][0], f[i-1][2]-prices[i]))
        // f[i][1]: 手上不持有股票，并且处于冷冻期中的累计最大收益(昨天卖出, f[i][1] = f[i-1][0]+prices[i])
        // f[i][2]: 手上不持有股票，并且不在冷冻期中的累计最大收益(等待状态，昨天卖出或更早卖出，f[i][2] = max(f[i-1][1], f[i-1][2]))
        vector<vector<int>> f(n, vector<int>(3));
        f[0][0] = -prices[0];
        for (int i = 1; i < n; ++i) {
            f[i][0] = max(f[i - 1][0], f[i - 1][2] - prices[i]);
            f[i][1] = f[i - 1][0] + prices[i];
            f[i][2] = max(f[i - 1][1], f[i - 1][2]);
        }
        return max(f[n - 1][1], f[n - 1][2]);
    }
};
