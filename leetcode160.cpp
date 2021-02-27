class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
 ListNode* pA = headA;
        ListNode* pB = headB;
        while(pA != pB){
            //����ʱA��B�Ƿ��ཻ
            pA = pA == nullptr ? headB : pA->next;
            pB = pB == nullptr ? headA : pB->next;
        }
        return pA;        
    }
};
