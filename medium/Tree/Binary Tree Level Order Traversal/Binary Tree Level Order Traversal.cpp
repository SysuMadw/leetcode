class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if (root == NULL)
            return ans;
        queue<TreeNode*> nodes;
        nodes.push(root);
        TreeNode* temp = NULL;
        
        while (nodes.empty() != true){
            int num = nodes.size();
            vector<int> arr;
            for (int i=0; i<num; i++){
                temp = nodes.front();
                nodes.pop();
                if (temp->left != NULL)
                    nodes.push(temp->left);
                if (temp->right != NULL)
                    nodes.push(temp->right);
                arr.push_back(temp->val);
            }
            ans.push_back(arr);
        }
        
        return ans;
    }
};
