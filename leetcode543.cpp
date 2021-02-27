class Solution {
public:
    // dfs
    int diameterOfBinaryTree(TreeNode* root) {
        int ret = 0;
        dfs(root, ret);
        return ret;
    }

    int dfs(TreeNode* root, int& ret) {
        if (root == nullptr) return 0;
        int maxLeft = dfs(root->left, ret);
        int maxRight = dfs(root->right, ret);
        ret = max(ret, maxLeft + maxRight);
        return max(maxLeft, maxRight) + 1;
    }
};
