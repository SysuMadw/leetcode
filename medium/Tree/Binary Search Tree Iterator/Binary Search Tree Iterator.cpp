class BSTIterator {
public:
    queue<int> nodes;
    BSTIterator(TreeNode* root) {
        stack<TreeNode*> ans;
        TreeNode* temp = root;
        
        while (ans.empty() != true || temp != NULL){
            if (temp != NULL){
                while (temp != NULL){
                    ans.push(temp);
                    temp = temp->left;
                }
            }
            else{
                temp = ans.top();
                ans.pop();
                nodes.push(temp->val);
                temp = temp->right;
            }
        }
    }
    
    /** @return the next smallest number */
    int next() {
        int num = nodes.front();
        nodes.pop();
        return num;
    }
    
    /** @return whether we have a next smallest number */
    bool hasNext() {
        return nodes.empty() == false;
    }
};

