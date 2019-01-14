class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        if (root == NULL)
            return ans;
        stack<TreeNode*> nodes;
        TreeNode* temp = root;
        
        while (nodes.empty() != true || temp != NULL){
            if (temp != NULL){
                while (temp != NULL){
                    ans.push_back(temp->val);
                    nodes.push(temp);
                    temp = temp->left;
                }
            }
            else {
                temp = nodes.top();
                nodes.pop();
                temp = temp->right;
            }
        }
        
        return ans;
    }
};
