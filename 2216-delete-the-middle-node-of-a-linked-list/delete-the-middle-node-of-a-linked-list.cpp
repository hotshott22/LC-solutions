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
    ListNode* deleteMiddle(ListNode* head) {

        if(head->next == NULL)return NULL;
        ListNode *p = head,*q=head,*x;
        while(q&&q->next){
            x = p;
            p = p->next;
            q = q->next->next;
        }
        x->next = x->next->next;
        return head;


        
    }
};