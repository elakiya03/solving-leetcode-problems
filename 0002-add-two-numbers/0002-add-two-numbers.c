/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode temp;

    struct ListNode* res = &temp;
    temp.next = NULL;

    int carry = 0;
    while (l1 || l2 || carry) {
        int sum = carry;

        if (l1) {
            sum += l1->val;
            l1 = l1->next;
        }

        if (l2) {
            sum += l2->val;
            l2 = l2->next;
        }
        carry = sum / 10;
        struct ListNode* node =
            (struct ListNode*)malloc(sizeof(struct ListNode));
        node->val = sum % 10;
        node->next = NULL;
        res->next = node;
        res = res->next;
    }

    return temp.next;
}