class Solution {
public:
    int count=0;
    int pathSum(TreeNode* root, int sum) {
        if (!root) return 0;
        dfs(root, sum) ;
        pathSum(root->left, sum) ;
        pathSum(root->right, sum);
        return count;
    }
    void dfs(TreeNode* root, int sum) {
        if (!root) return;
        if (sum - root->val == 0) count++;
        dfs(root->left, sum - root->val);
        dfs(root->right, sum - root->val);
    }
};
