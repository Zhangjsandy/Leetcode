class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
stack<TreeNode*> s;
        int num=0;
        TreeNode *cur=root;
        while(!s.empty() || cur)
        {
            if(cur)
            {
                s.push(cur);
                cur=cur->left;
            }
            else
            {
                cur=s.top();
                s.pop();
                num++;
                if(num==k)
                    return cur->val;
                cur=cur->right;
            }
        }
        return 0;
    }
};
