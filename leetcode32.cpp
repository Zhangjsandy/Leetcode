class Solution {
public:
    int longestValidParentheses(string s) {
int len = s.size(), ans = 0;
        vector<int> dp(len + 1, 0);
        for (int i = 1; i < len; i++) {
            if (s[i] == ')' && i - dp[i] - 1 >= 0 && s[i - dp[i] - 1] == '(') {
                dp[i + 1] = dp[i] + 2 + dp[i - dp[i] - 1];
            }
            ans = max(ans, dp[i + 1]);
        }
        return ans;
    }
};
