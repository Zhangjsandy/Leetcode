class Solution {
public:
    void flatten(TreeNode* root) {
auto now = root;
        while(now)
        {
            if (now->left)
            {
                // 我们从根节点开始迭代，每次将当前节点的左子树的右链，插入当前节点的右链
                auto p = now->left;
                while(p->right) p = p->right;
                p->right = now->right;
                now->right = now->left;
                now->left = nullptr;
            }
            now = now->right;
        }
    }
};
