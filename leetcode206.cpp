class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        struct ListNode *p,*pre=NULL;
        while(head)
        {
p=head->next;
head->next=pre;
pre=head;
head=p;
        }
return pre;
    }
};
