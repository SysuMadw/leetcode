class Solution {
public:
    bool isSubtree(TreeNode* s, TreeNode* t) {
        if (t == NULL)
           return true;
        else if (s == NULL)
            return false;
        else if (s->val == t->val)
            return isSame(s,t) || isSubtree(s->left,t) || isSubtree(s->right,t);
        else
            return isSubtree(s->left,t) || isSubtree(s->right,t);
    }
    
    bool isSame(TreeNode* s, TreeNode* t){
        if (s == NULL && t == NULL)
            return true;
        else if (s==NULL || t==NULL || s->val!=t->val)
            return false;
        else
            return isSame(s->left,t->left) && isSame(s->right,t->right);
    }
};
