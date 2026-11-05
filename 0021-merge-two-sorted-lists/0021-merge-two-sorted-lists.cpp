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
        ListNode* dummy = new ListNode(-1);
        ListNode* res = dummy;

        if (!l1)
            return l2;
        if (!l2)
            return l1;
        if (!l1 && !l2)
            return nullptr;

        while (l1 && l2) {
            if (l1->val <= l2->val) {
                res->next = new ListNode(l1->val);
                l1 = l1->next;
            } else {
                res->next = new ListNode(l2->val);
                l2 = l2->next;
            }
            res = res->next;
        }
        if (l1) {
            res->next = l1;
        }

        if (l2) {
            res->next = l2;
        }
        return dummy->next;
    }
};