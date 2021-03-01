class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
return helper(preorder, 0, preorder.size() - 1, inorder, 0, inorder.size() - 1);
    }
    TreeNode* helper(vector<int>& preorder, int l1, int r1, vector<int>& inorder, int l2, int r2) {
        if (r1 < l1) return nullptr;
        auto root = new TreeNode(preorder[l1]);
        int mid = l2;
        while (inorder[mid] != preorder[l1]) ++mid;
        root->left = helper(preorder, l1 + 1, l1 + mid - l2, inorder, l2, mid - 1);
        root->right = helper(preorder, l1 + mid - l2 + 1, r1, inorder, mid + 1, r2);
        return root;
    }
};
