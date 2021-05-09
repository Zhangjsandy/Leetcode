class Solution {
public:
    vector<int> grayCode(int n) {
unordered_set<int> seen{0};
        vector<int> ans{0};
        int cur = 0;
        while (ans.size() < (1 << n)) {
            for (int i = 0; i < n; ++i) {
                int nxt = cur ^ (1 << i);
                if (seen.count(nxt) == 0) {
                    ans.push_back(nxt);
                    seen.insert(nxt);
                    cur = nxt;
                    break;
                }
            }
        }
        return ans;
    }
};
