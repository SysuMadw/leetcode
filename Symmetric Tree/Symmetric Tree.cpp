class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if (root == NULL)
            return true;
        return isSymmetric(root->left,root->right);
    }
    
    bool isSymmetric(TreeNode* p, TreeNode* q){
        if (p == NULL && q == NULL)
            return true;
        else if (p == NULL || q == NULL || p->val != q->val)
            return false;
        else 
            return isSymmetric(p->left,q->right) && isSymmetric(p->right,q->left);
    }
};
