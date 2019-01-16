class Solution {
public:
    vector<vector<int>> ans;
    vector<int> arr;
    int sumNumbers(TreeNode* root) {
        paths(root);
        int sum = 0, num = ans.size();
        for (int i=0; i<num; ++i){
            int mount = 0;
            for (int j=0; j<ans[i].size(); j++)
                mount = mount * 10 + ans[i][j];
            sum += mount;
        }
        
        return sum;
    }
    
    void paths(TreeNode* root){
        if (root == NULL)
            return;
        
        arr.push_back(root->val);
        paths(root->left);
        paths(root->right);
        
        if (root->left == NULL && root->right == NULL)
            ans.push_back(arr);
        arr.pop_back();
    }
};
