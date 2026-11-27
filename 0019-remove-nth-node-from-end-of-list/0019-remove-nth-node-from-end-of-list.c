/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    int len = 0;

    struct ListNode* temp = head;
    while (temp) {
        len++;
        temp = temp->next;
    }

    if (head->next == NULL) {
        free(head);
        return NULL;
    }

    if (len == n) {
        struct ListNode* t = head;
        head = head->next;
        free(t);
        return head;
    }

    struct ListNode* prev = head;
    struct ListNode* curr = head;

    for (int i = 1; i < len - n + 1; i++) {
        prev = curr;
        curr = curr->next;
    }

    prev->next = curr->next;
    free(curr);
    return head;
}