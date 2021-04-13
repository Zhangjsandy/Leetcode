class Solution {
public:
    int maxProduct(vector<int>& nums) {
int n = nums.size();
        int ans = INT_MIN;
        int max_v = 1, min_v = 1;
        for (int i = 0; i < n; i++) {
            if (nums[i] < 0) swap(max_v, min_v);
            max_v = max(max_v * nums[i], nums[i]);
            min_v = min(min_v * nums[i], nums[i]);
            ans = max(max_v, ans);
        }
        return ans;
    }
};
