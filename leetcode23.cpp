class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
 auto head = ListNode(0);
        auto comp = [](ListNode* const &a, ListNode* const &b){return a->val > b->val;};
        priority_queue<ListNode*, vector<ListNode*>, decltype(comp)> q(comp);
        for (auto &h : lists) if (h != nullptr) q.push(h);
        auto p = &head;
        while (!q.empty()) {
            p->next = q.top();
            p = p->next;
            q.pop();
            if (p->next != nullptr) q.push(p->next);
        }
        return head.next;
    }
};
