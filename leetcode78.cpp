class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
vector<int> t;
void dfs(int cur, int n) {
    if (cur == n) {// ��¼��
        return;
    }// ����ѡ��ǰλ��
    t.push_back(cur);
    dfs(cur + 1, n, k);
    t.pop_back(); // ���ǲ�ѡ��ǰλ��
    dfs(cur + 1, n, k);
}
    }
};
