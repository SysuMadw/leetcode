class Solution {
public:
    int number = 0;
    int pathSum(TreeNode* root, int sum) {
        if (root == NULL)
            return 0;
        else if (root->val == sum)
            return 1 + path(root->left,0,0) + path(root->right,0,0) + 
                pathSum(root->left,sum) + pathSum(root->right,sum);
        else
            return path(root->left,root->val,sum) + path(root->right,root->val,sum) + 
                pathSum(root->left,sum) + pathSum(root->right,sum);
    }
    
    int path(TreeNode* root, int current, int target){
        if (root == NULL)
            return 0;
        current += root->val;
        if (current == target)
            return 1 + path(root->left,0,0) + path(root->right,0,0);
        else
            return path(root->left,current,target) + path(root->right,current,target);
    }
    
};
