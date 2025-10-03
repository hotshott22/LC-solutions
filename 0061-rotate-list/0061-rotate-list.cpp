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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL)
            return head;

        auto itr=head;
        auto len=1;

        while(itr->next!=NULL)  itr=itr->next,len++;

        itr->next=head;
        itr=head;

        for(int i=0;i<len-(k%len)-1;i++){
            itr=itr->next;
        }    

        head=itr->next;

        itr->next=NULL;

        return head;

    }
};