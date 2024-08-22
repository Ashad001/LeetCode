/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;
        if (root == nullptr) { 
            return ans;
        }
        
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()) {
            double temp = 0.0;
            int n = q.size();
            for (int i = 0; i < n; i++) {
                TreeNode* f = q.front();
                q.pop();
                temp += f->val;
                
                if (f->left != nullptr) {
                    q.push(f->left);
                }
                if (f->right != nullptr) {
                    q.push(f->right);
                }
            }
            ans.push_back(temp / n);
            
        }
        
        return ans;
    }
};