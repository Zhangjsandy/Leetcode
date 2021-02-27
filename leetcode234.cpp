class Solution {
public:
    bool isPalindrome(ListNode* head) {
 int n = 0;
        // 求表长
        for (ListNode *p = head; p; p = p->next) n ++ ; 
        ListNode *p = head;
        n /= 2;
        while (n --) p = p->next;
        // 后半部分翻转，变成俩链表
        p = my_reverse(p); 
        // 俩链表 一位一位比较，不用考虑奇数偶数，多一位也 return true
        while (head != nullptr && p != nullptr){
            if (head->val != p->val) return false;
            head = head->next;
            p = p->next;
        }
        return true;
    }
    ListNode* my_reverse(ListNode* p){ // 翻转链表
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
