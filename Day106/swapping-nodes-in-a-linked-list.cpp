class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp = head;
        ListNode* val1;
        int c = 0;
        while(temp!=NULL){
            c++;
            if(c == k)
                val1 = temp;
            temp=temp->next;
        }
        int c1 = 0;
        temp = head;
        while(temp!=NULL){
            c1++;
            if(c1 == (c-k)+1){
                int t = temp->val;
                temp->val = val1->val;
                val1->val = t;
                break;
            }
            temp=temp->next;
        }
        return head;
    }
};