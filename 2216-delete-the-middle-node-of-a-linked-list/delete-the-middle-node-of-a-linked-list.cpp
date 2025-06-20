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

        if(head==NULL) return NULL;

        ListNode* prev = new ListNode(0);
        prev->next=head;

        ListNode* s=prev;
        ListNode* f=head;

        while(f!=nullptr && f->next!=nullptr)
        {
            s=s->next;
            f=f->next->next;
        }
        s->next=s->next->next;
        return prev->next;
        
    }
};