/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode removeNthFromEnd(ListNode head, int n) {
        int len = 0;

        ListNode temp = head;
        while (temp != null) {
            len++;
            temp = temp.next;
        }

        if (n == len) {
            head = head.next;
            return head;
        }

        ListNode prev = null;
        ListNode curr = head;

        for (int i = 1; i < len - n + 1; i++) {
            prev = curr;
            curr = curr.next;
        }

        prev.next = curr.next;
        return head;
    }
}