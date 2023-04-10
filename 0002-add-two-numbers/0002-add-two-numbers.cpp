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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {     
        ListNode* p=new ListNode(-1);
        ListNode* ans=p;
        int carry=0;
        
        while(l1 && l2)
        {
            int sum=l1->val+l2->val+carry;
            int digit=sum%10;
            ans->next=new ListNode(digit);
            ans=ans->next;
            carry=sum/10;
            l1=l1->next;
            l2=l2->next;                       
        }
        while(l1!=NULL)
        {
            int sum=l1->val+carry;
            int digit=sum%10;
            ans->next=new ListNode(digit);
            ans=ans->next;
            carry=sum/10;
            l1=l1->next;
        }
        while(l2!=NULL)
        {
            int sum=l2->val+carry;
            int digit=sum%10;
            ans->next=new ListNode(digit);
            ans=ans->next;
            carry=sum/10;
            l2=l2->next;
        }
         while(carry != 0){
            int sum = carry;
            int digit = sum % 10;
            ans->next = new ListNode(digit);
            ans = ans->next;
            carry = sum/ 10;
        }
        return p->next;
    }
};