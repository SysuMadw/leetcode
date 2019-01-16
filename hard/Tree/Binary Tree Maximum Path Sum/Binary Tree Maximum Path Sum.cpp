class Solution {
public:
    int maxPathSum(TreeNode* root) {
        if (root == NULL)
            return 0;
        else if (root->left == NULL && root->right == NULL)
            return root->val;
        else if (root->left == NULL)
            return max(maxPathSum(root->right),maxPath(root->right)+root->val); 
        else if (root->right == NULL)
            return max(maxPathSum(root->left),maxPath(root->left)+root->val);
        else
            return max(max(maxPathSum(root->left),maxPathSum(root->right)),maxPath(root->left)+maxPath(root->right)+root->val);
    }
    
    int maxPath(TreeNode* root){
        if (root == NULL)
            return 0;
        int num = max(maxPath(root->left),maxPath(root->right)) + root->val;
        return num > 0 ? num : 0;
    }
};
