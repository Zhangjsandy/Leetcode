class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (root == NULL) return NULL;
        if (root->val == p->val || root->val == q->val) return root;
        TreeNode* left = lowestCommonAncestor(root->left, p, q);
        TreeNode* right = lowestCommonAncestor(root->right, p, q);//�ֱ�����������в���
        if (left != NULL && right != NULL) return root;
        return left == NULL ? right : left;
    }
};
