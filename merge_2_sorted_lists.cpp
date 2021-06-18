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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* X = new ListNode();
        ListNode* Y = X;
        while(l1!=NULL && l2!=NULL)
        {
            if(l1->val <= l2->val)
            {
                X->next = l1;
                X = X->next;
                l1 = l1->next;
            }
            else
            {
                X->next = l2;
                X = X->next;
                l2 = l2->next;
            }
        }
        if(l1!=NULL)
        {
                X->next = l1;
                X = X->next;
        }
        if(l2!=NULL)
        {
                X->next = l2;
                X = X->next;
        }
        return Y->next;
    }
};
