class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
vector<int> res;
    stack<TreeNode*> st;
    auto p = root;
    // ������ջѭ��
    // ���ѭ����ᷢ�ֺͺ���ĵ�ѭ��������һ�����ظ�������Խ��кϲ���
    //�ֿ�����
    while (p) {
        st.push(p);
        p = p->left;
    }
    while (!st.empty()) {
        auto node = st.top();
        st.pop();
        res.emplace_back(node->val);
        p = node->right;
        // һ������һ���ڵ㣬��������������ջ������
        while (p) {
            st.push(p);
            p = p->left;
        }
    }   
    return res;
    }
};
