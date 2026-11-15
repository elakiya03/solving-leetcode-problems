/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {number[]} preorder
 * @param {number[]} inorder
 * @return {TreeNode}
 */
var buildTree = function (preorder, inorder) {
    let map = new Map();
    inorder.forEach((val, i) => map.set(val, i));

    let preIndex = 0;

    function buildTreeResc(left, right) {
        if (left > right) return null;

        const val = preorder[preIndex++];
        const node = new TreeNode(val);
        let mid = map.get(val);

        node.left = buildTreeResc(left, mid - 1)
        node.right = buildTreeResc(mid + 1, right);
        return node;
    }

    let root = buildTreeResc(0, inorder.length - 1);
    return root;
};