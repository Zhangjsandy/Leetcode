class Solution {
public:
    void flatten(TreeNode* root) {
auto now = root;
        while(now)
        {
            if (now->left)
            {
                // ���ǴӸ��ڵ㿪ʼ������ÿ�ν���ǰ�ڵ�������������������뵱ǰ�ڵ������
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
