class Solution {
public:
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        return merge(t1,t2);
    }
    
    TreeNode* merge(TreeNode* t1, TreeNode* t2){
        if (t1 == NULL && t2 == NULL)
            return NULL;
        else if (t1 != NULL && t2 != NULL){
            TreeNode* root = new TreeNode(t1->val + t2->val);
            root->left = merge(t1->left,t2->left);
            root->right = merge(t1->right,t2->right);
            return root;
        }
        else 
            return t1==NULL? t2 : t1;        
    }
};
