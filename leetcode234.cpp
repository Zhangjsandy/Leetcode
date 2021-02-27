class Solution {
public:
    bool isPalindrome(ListNode* head) {
 int n = 0;
        // ���
        for (ListNode *p = head; p; p = p->next) n ++ ; 
        ListNode *p = head;
        n /= 2;
        while (n --) p = p->next;
        // ��벿�ַ�ת�����������
        p = my_reverse(p); 
        // ������ һλһλ�Ƚϣ����ÿ�������ż������һλҲ return true
        while (head != nullptr && p != nullptr){
            if (head->val != p->val) return false;
            head = head->next;
            p = p->next;
        }
        return true;
    }
    ListNode* my_reverse(ListNode* p){ // ��ת����
        ListNode* pre = nullptr;
        while (p){
            ListNode* temp = p->next;
            p->next = pre;
            pre = p;
            p = temp;
        }
        return pre;
    }
};
