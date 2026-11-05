# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(
        self, list1: ListNode | None, list2: ListNode | None
    ) -> ListNode | None:

        dummy = ListNode(-1)
        res = dummy

        while list1 and list2:
            if list1.val <= list2.val:
                res.next = ListNode(list1.val)
                list1 = list1.next
                res = res.next
            else:
                res.next = ListNode(list2.val)
                list2 = list2.next
                res = res.next

        if list1:
            res.next = list1

        if list2:
            res.next = list2

        return dummy.next
