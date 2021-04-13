class Solution {
public:
    bool canJump(vector<int>& nums) {
int len = nums.size();
        if (len <= 1) return true;
        int maxDis = nums[0];
        for (int i = 1; i < len - 1; i++) {
            if (i <= maxDis) {
                maxDis = max(maxDis, nums[i]+i);
            }
        }
return maxDis >= len - 1;
    }
};
