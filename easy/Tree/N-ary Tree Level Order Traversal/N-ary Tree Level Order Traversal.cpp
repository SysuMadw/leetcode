class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> ans;
        if (root == NULL)
            return ans;
        queue<Node*> nodes;
        nodes.push(root);
        Node* temp = NULL;
        
        while (nodes.empty() != true){
            int num = nodes.size();
            vector<int> arr;
            for (int i=0; i<num; i++){
                temp = nodes.front();
                nodes.pop();
                arr.push_back(temp->val);
                for(int i=0; i<(temp->children).size(); i++)
                    nodes.push((temp->children)[i]);
            }
            ans.push_back(arr);
        }
        
        return ans;
    }
};
