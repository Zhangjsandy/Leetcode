class Solution {
public:
    int climbStairs(int n) {
int p = 0, q = 0, r = 1;
        for (int i = 1; i <= n; ++i) {
            p = q; 
            q = r; 
            r = p + q;
        }
        return r;//问题可装化为Fibonacci数列的递推方式 
    }
};
