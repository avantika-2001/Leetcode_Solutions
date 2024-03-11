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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head=NULL;
        ListNode* p=NULL;
        if(list1==NULL)
            return list2;
        if(list2==NULL)
            return list1;
        if(list1->val>list2->val){
            head=list2;
            list2=list2->next;
        }
        else{
            head=list1;
            list1=list1->next;
        }
        p=head;
        while(list1 && list2){
            if(list1->val>list2->val){
                p->next=list2;
                list2=list2->next;
            }
            else{
                p->next=list1;
                list1=list1->next;
            }
            p=p->next;
        }
        while(list1){
            p->next=list1;
            list1=list1->next;
            p=p->next;
        }
        while(list2){
            p->next=list2;
            list2=list2->next;
            p=p->next;
        }
        p=NULL;
        return head;
    }
};