/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    int preIndex;
    
    public TreeNode buildTreeResc(Map<Integer, Integer> map, int[] preorder, int left, int right) {
        if (left > right)
            return null;

        int val = preorder[preIndex];
        preIndex++;

        TreeNode root = new TreeNode(val);
        int mid = map.get(val);

        root.left = buildTreeResc(map, preorder, left, mid - 1);
        root.right = buildTreeResc(map, preorder, mid + 1, right);
        return root;
    }

    public TreeNode buildTree(int[] preorder, int[] inorder) {
        Map<Integer, Integer> map = new HashMap<>();

        for (int i = 0; i < inorder.length; i++) {
            map.put(inorder[i], i);
        }

        preIndex = 0;

        TreeNode root = buildTreeResc(map, preorder, 0, inorder.length - 1);
        return root;
    }
}