class Solution {
public:
    bool hasCycle(ListNode *head) {
int cnt = 0;
        while(head){
            cnt ++;
            if(cnt > 10000)
                break;//��ֹԪ�ع���
            head = head->next;
        }
        return cnt > 10000;  
    }
};
