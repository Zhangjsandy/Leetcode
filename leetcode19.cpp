class Solution {
public:
int cur=0;
    ListNode* removeNthFromEnd(ListNode* head, int n) {
 if(!head) return NULL;
       head->next = removeNthFromEnd(head->next,n);
       cur++;
       if(n==cur) return head->next;
       return head;
    }
};
