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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len = 0;
        ListNode* temp = head;
        while (temp) {
            len++;
            temp = temp->next;
        }

        if (len == 1) {
            delete head;
            return nullptr;
        }

        //from the end of the list, if n==len means to remove head of the list
        if (n == len) {
            ListNode* t = head;
            head = head->next;
            delete t;
            return head;
        }

        ListNode* curr = head;
        ListNode* prev = nullptr;
        for (int i = 1; i < len - n + 1; i++) {
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        delete curr;
        return head;
    }
};