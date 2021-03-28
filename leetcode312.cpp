class Solution {
public:
    int maxCoins(vector<int>& nums) {
       int n = nums.size();
       nums.insert(nums.begin(), 1);
       nums.push_back(1);
       vector<vector<int>> dp(n + 2, vector(n + 2, 0));
       //dp[i][j]表示戳破编号为i..j之间的气球(不包括i和j)的最大值
       for (int l = 2; l <= n + 1; l++) { //区间由小到大
           for (int i = 0; i + l <= n + 1; i++) { //l为i和j之间的步长
               int j = i + l;
               for(int k = i + 1; k < j; k++) {
                  dp[i][j] = max(dp[i][j], dp[i][k] + dp[k][j] + nums[i] * nums[k] * nums[j]);
               }
           }
       }
       return dp[0][n + 1];
    }
};
