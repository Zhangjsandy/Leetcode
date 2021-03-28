class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {// ¶¯Ì¬¹æ»®
        int r = matrix.size(), c = matrix[0].size(), max_square = 0;
        vector<vector<int>> dp(r+1, vector<int>(c+1, 0));
        for (int i = 1; i <= r; i++){
            for (int j = 1; j <= c; j++){
                if (matrix[i-1][j-1] == '1'){
                    dp[i][j] = min(dp[i-1][j-1], min(dp[i-1][j], dp[i][j-1])) + 1;
                    max_square = max(max_square, dp[i][j] * dp[i][j]);
                }
            }
        }
        return max_square;
    }
};
