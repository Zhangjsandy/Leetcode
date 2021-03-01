class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
vector<int> res;
    stack<TreeNode*> st;
    auto p = root;
    // 左链入栈循环
    // 这个循环你会发现和后面的的循环代码有一部分重复，你可以进行合并。
    //分开考虑
    while (p) {
        st.push(p);
        p = p->left;
    }
    while (!st.empty()) {
        auto node = st.top();
        st.pop();
        res.emplace_back(node->val);
        p = node->right;
        // 一旦弹出一个节点，继续做“左链入栈”操作
        while (p) {
            st.push(p);
            p = p->left;
        }
    }   
    return res;
    }
};
