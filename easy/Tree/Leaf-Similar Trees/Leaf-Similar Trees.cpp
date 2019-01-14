class Solution {
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> seq1;
        vector<int> seq2;
        GetValueSequence(root1,seq1);
        GetValueSequence(root2,seq2);
        
        if (seq1.size() != seq2.size())
            return false;
        else{
            int n = seq1.size();
            for (int i=0; i<n; i++)
                if (seq1[i] != seq2[i])
                    return false;
            return true;
        }
    }
    
    void GetValueSequence(TreeNode* root, vector<int>& sequence){
        if (root == NULL)
            return;
        else if (root->left == NULL && root->right == NULL){
            sequence.push_back(root->val);
            return;
        }
        else{
            GetValueSequence(root->left,sequence);
            GetValueSequence(root->right,sequence);
        }
    }
};
