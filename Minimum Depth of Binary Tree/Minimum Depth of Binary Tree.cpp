class Solution {
public:
    int minDepth(TreeNode* root) {
        if (root == NULL)
            return 0;
        else if (root->left == NULL && root->right == NULL)
            return 1;
        else if (root->left != NULL && root->right != NULL)
            return min(minDepth(root->left),minDepth(root->right)) + 1;
        else {
            TreeNode * node = root->left == NULL? root->right : root->left;
            return minDepth(node) + 1;
        } 
    }
};
