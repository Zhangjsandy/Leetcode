class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
if (nums.size() == 0)
            return 0;
        priority_queue<int, vector<int>, greater<int> > que(nums.begin(), nums.end());
        int res = 1;
        int len = 1;
        int temp = que.top();
        que.pop();
        while (!que.empty()) {
            int val = que.top();
            que.pop();
            if (val == temp)
                continue;
            else if (val == temp + 1) {
                len += 1;
                res = max(res, len);
                temp = val;
            } else {
                temp = val;
                len = 1;
            }
        }
        return res;
    }
};
