class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
 ListNode* pA = headA;
        ListNode* pB = headB;
        while(pA != pB){
            //遍历时A与B是否相交
            pA = pA == nullptr ? headB : pA->next;
            pB = pB == nullptr ? headA : pB->next;
        }
        return pA;        
    }
};
