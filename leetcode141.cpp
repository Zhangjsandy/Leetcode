class Solution {
public:
    bool hasCycle(ListNode *head) {
int cnt = 0;
        while(head){
            cnt ++;
            if(cnt > 10000)
                break;//·ÀÖ¹ÔªËØ¹ý¶à
            head = head->next;
        }
        return cnt > 10000;  
    }
};
