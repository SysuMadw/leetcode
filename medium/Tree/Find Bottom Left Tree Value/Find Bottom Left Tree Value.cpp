class Solution {
public:
    int num;
    int level;
    int findBottomLeftValue(TreeNode* root) {
        num = root->val;
        level = 1;
        inorder(root,level);
        
        return num;
    }
    
    void inorder(TreeNode* root, int height){
        if (root == NULL)
            return;
        inorder(root->left,height + 1);
        if (height > level){
            num = root->val;
            level = height;
        }
        inorder(root->right,height + 1);
    }
};
