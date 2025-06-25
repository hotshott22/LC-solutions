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

        ListNode *tail = new ListNode(0);
        ListNode* head = tail;

        int sum=0;

        while(1){
             
        if(l1) sum+=l1->val;
        if(l2) sum+=l2->val;

        tail->val=sum%10;
        sum/=10;

        if(l1) l1=l1->next;
        if(l2) l2=l2->next;

        if(l1 || l2 || sum){
            tail->next= new ListNode(0);
            tail=tail->next;
        }
        else break;
        }

        return head;

       
        
    }
};