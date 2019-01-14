class Solution {
public:
    TreeNode* addOneRow(TreeNode* root, int v, int d) {
      
        TreeNode* temp = NULL, *left = NULL, *right = NULL;
        if (d == 1){
            temp = new TreeNode(v);
            temp->left = root;
            return temp;
        }
        else {
            queue<TreeNode*> nodes;
            nodes.push(root);
            int depth = 1;
            
            while (nodes.empty() == false){
                int num = nodes.size();
                if (depth == d - 1){
                    for (int i=0; i<num; i++){
                        temp = nodes.front();
                        nodes.pop();
                        left = new TreeNode(v);
                        right = new TreeNode(v);
                        if (temp->left != NULL){
                            left->left = temp->left;
                            temp->left = left;
                        }
                        else
                            temp->left = left;
                        if (temp->right != NULL){
                            right->right = temp->right;
                            temp->right = right;
                        }
                        else
                            temp->right = right;
                    }  
                    break;
                }
                else {
                    for (int i=0; i<num; i++){
                        temp = nodes.front();
                        nodes.pop();
                        if (temp->left != NULL)
                            nodes.push(temp->left);
                        if (temp->right != NULL)
                            nodes.push(temp->right);
                    }
                }
                
                depth++;
            }
            
            return root;
        }
    }
};
