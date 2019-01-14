class Solution {
public:
    TreeNode* pruneTree(TreeNode* root) {
        return prune(root);
    }
    
    TreeNode* prune(TreeNode* root){
        if (root == NULL)
            return root;
        root->right = prune(root->right);
        root->left = prune(root->left);
        if (root->left == NULL && root->right == NULL && root->val == 0)
            return NULL;
        else
            return root;
    }
};
