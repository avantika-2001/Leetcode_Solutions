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
    int pairSum(ListNode* head) {
        //Without changing links
        /*int cnt=0;
        ListNode*p=head;
        vector<int>v;
        while(p){
            v.push_back(p->val);
            p=p->next;
        }
        int i=0,j=v.size()-1;
        int max_sum=INT_MIN;
        while(i<j){
            max_sum=max(max_sum,v[i]+v[j]);
            i++;
            j--;
        }
        return max_sum;*/
        //With changing links;
        int len=0;
        ListNode*p=head;
        while(p){
            len++;
            p=p->next;
        }
        int i=0;
        p=head;
        while(i<len/2 && p){
            p=p->next;
            i++;
        }
        ListNode* next=NULL;
        ListNode* q=NULL;
        while(p){
            next=p->next;
            p->next=q;
            q=p;
            p=next;
        }
        int maxsum=0;
        p=head;
        while(q){
            maxsum=max(maxsum,p->val+q->val);
            p=p->next;
            q=q->next;
        }
        return maxsum;
    }
};