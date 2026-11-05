/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* buildTreeRec(unordered_map<int, int>& map, vector<int>& preorder,
                           int& preIndex, int left, int right) {
        if (left > right)
            return nullptr;

        int nodeVal = preorder[preIndex++];

        TreeNode* root = new TreeNode(nodeVal);
        int mid = map[nodeVal];

        root->left = buildTreeRec(map, preorder, preIndex, left, mid - 1);
        root->right = buildTreeRec(map, preorder, preIndex, mid + 1, right);

        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int, int> map;
        for (int i = 0; i < inorder.size(); i++) {
            map[inorder[i]] = i;
        }
        int preIndex = 0;
        TreeNode* root = buildTreeRec(map, preorder, preIndex, 0, inorder.size() - 1);
        return root;
    }
};