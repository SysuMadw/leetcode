class Solution {
public:
    vector<vector<int>> ans;
    vector<int> arr;
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        int current = 0;
        path(root,current,sum);
        return ans;
    }
    
    void path(TreeNode* root, int& current, int& sum){
        if (root == NULL)
            return;
        
        current += root->val;
        arr.push_back(root->val);
        path(root->left,current,sum);
        path(root->right,current,sum);
        
        if (root->left==NULL && root->right==NULL && current==sum)
            ans.push_back(arr);
        
        current -= root->val;
        arr.pop_back();
    }
};
