class Solution {
public:
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        TreeNode* root = constructMaximumBinaryTree(nums,0,nums.size()-1);
        return root;
    }
    
    TreeNode* constructMaximumBinaryTree(vector<int>& nums, int left, int right){
        if (left > right)
            return NULL;
        int max = nums[left], index = left;
        for (int i=left+1; i<=right; i++)
            if (nums[i] > max){
                max = nums[i];
                index = i;
            }
        TreeNode * root = new TreeNode(max);
        root->left = constructMaximumBinaryTree(nums,left,index-1);
        root->right = constructMaximumBinaryTree(nums,index+1,right);
        
        return root;
    }
};
