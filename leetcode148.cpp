class Solution {
public:
    ListNode* sortList(ListNode* head) {
priority_queue<int, vector<int>, greater<int>> pq;
        ListNode *p = head;
        while(p) {
            pq.push(p->val);
            p = p->next;
        }

        p = head;
        while(p) {
            p->val = pq.top();
            pq.pop();
            p = p->next; 
        }
        return head;
    }
};
