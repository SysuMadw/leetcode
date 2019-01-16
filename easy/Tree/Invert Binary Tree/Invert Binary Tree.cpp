class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if (root == NULL)
            return NULL;
        TreeNode* leftChild = root->left, *rightChild = root->right;
        root->left = invertTree(rightChild);
        root->right = invertTree(leftChild);
        return root;
    }
};
