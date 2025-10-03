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

    ListNode* merge2List(ListNode* l1, ListNode* l2)
    {
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        ListNode* dummy = new ListNode(-1e6);
        ListNode* temp = dummy;

        while(temp1 != NULL && temp2 != NULL)
        {
            if(temp1->val < temp2->val)
            {
                dummy->next = temp1;
                dummy = temp1;
                temp1 = temp1->next;
            }
            else
            {
                dummy->next = temp2;
                dummy = temp2;
                temp2 = temp2->next;
            }
        }
        if(temp1 != NULL) dummy->next = temp1;
        if(temp2 != NULL) dummy->next = temp2;
        return temp->next;
    }

    ListNode* findM(ListNode* head)
    {
        ListNode* fast = head->next;
        ListNode* slow = head;
        while(fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    ListNode* sortList(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;

        ListNode* mid = findM(head);
        ListNode* right = mid->next;
        mid->next = NULL;
        ListNode* left = head;

        left = sortList(left);
        right = sortList(right);

        return merge2List(left, right);
    }
};