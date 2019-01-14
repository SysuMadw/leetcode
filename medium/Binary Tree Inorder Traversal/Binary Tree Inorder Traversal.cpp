class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        
        vector<int> ans;
        if (root == NULL)
            return ans;
        stack<TreeNode*> nodes;
        TreeNode* temp = root;
        
        while (nodes.empty() != true || temp != NULL){
            if (temp != NULL){
                while (temp != NULL){
                    nodes.push(temp);
                    temp = temp->left;
                }
            }
            else {
                temp = nodes.top();
                nodes.pop();
                ans.push_back(temp->val);
                temp = temp->right;
            }
        }
        
        return ans;
    }
};
