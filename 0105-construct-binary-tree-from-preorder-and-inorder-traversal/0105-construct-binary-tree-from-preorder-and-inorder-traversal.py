# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def buildTree(self, preorder: list[int], inorder: list[int]) -> TreeNode | None:

        mp = {val: i for i, val in enumerate(inorder)}
        self.preIndex = 0

        def solve(start, end):
            if start > end:
                return None

            val = preorder[self.preIndex]
            self.preIndex += 1

            root = TreeNode(val)
            mid = mp[val]

            root.left = solve(start, mid - 1)
            root.right = solve(mid + 1, end)

            return root

        return solve(0, len(inorder) - 1)
