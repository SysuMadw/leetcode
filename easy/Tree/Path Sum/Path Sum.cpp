class Solution {
public:
    bool hasPathSum(TreeNode* root, int sum) {
        int current = 0;
        return path(root,current,sum);
    }
    
    bool path(TreeNode* root, int& current, int& target){
        if (root == NULL)
            return false;
        
        current += root->val;
        if (path(root->left,current,target) || path(root->right,current,target) || 
            (root->left==NULL && root->right==NULL && current==target))
            return true;
        else
            current -= root->val;
        return false;
    }
};
