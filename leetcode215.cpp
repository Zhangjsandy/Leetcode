class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
 return sort(nums.begin(), nums.end(), greater<int>()), nums[k - 1];
    }
};
