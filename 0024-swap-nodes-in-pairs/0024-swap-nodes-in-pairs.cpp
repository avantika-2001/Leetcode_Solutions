/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(!head || !head->next)
            return head;
        /*ListNode* p=head;
        ListNode* q=head->next;
        ListNode* r=NULL;
        while(p && q){
            swap(p->val,q->val);
            p=p->next->next;
            if(q->next)
                q=q->next->next;
        }*/
        ListNode* p=head->next; 
        head->next = swapPairs(head->next->next); 
        p->next = head; 
        return p;
    }
};