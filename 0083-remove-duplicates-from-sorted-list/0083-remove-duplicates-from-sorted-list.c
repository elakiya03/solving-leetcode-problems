/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode* temp = head;

    while (temp && temp->next) {
        if (temp->val == temp->next->val) {
            struct ListNode* curr = temp->next;
            temp->next = temp->next->next;
            free(curr);
        }
        else temp = temp->next;
    }

    return head;
}
