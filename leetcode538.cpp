class Solution {
public:
    TreeNode* convertBST(TreeNode* root) {
 calc(root, 0);
        return root;
    }
    int calc(TreeNode* node, int fuvalue){
        if(!node)return fuvalue;
        node->val += calc(node->right, fuvalue) ;
        return calc(node->left, node->val);
    }
    TreeNode* get_pre(TreeNode* node){// 没有父节点
        return nullptr;
    }
};
