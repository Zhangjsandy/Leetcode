class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum = 0, res = 0;
        unordered_map<int, int> cul;
        cul[0] = 1;
        for (auto &m : nums) {
            sum += m;
            res += cul[sum - k];
            ++cul[sum];
        }
        return res;//保存从第0个元素到当前元素的和
    }
};
