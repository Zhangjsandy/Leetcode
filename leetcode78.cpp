class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
vector<int> t;
void dfs(int cur, int n) {
    if (cur == n) {// 记录答案
        return;
    }// 考虑选择当前位置
    t.push_back(cur);
    dfs(cur + 1, n, k);
    t.pop_back(); // 考虑不选择当前位置
    dfs(cur + 1, n, k);
}
    }
};
