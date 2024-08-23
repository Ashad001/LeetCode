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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> res;
        if (!root) {
            return res;
        }
        deque<TreeNode*> dq;
        dq.push_back(root);
        
        while(!dq.empty()) {
            int s = dq.size();
            vector<int> temp;
            for (int i = 0; i < s; i++) {
                TreeNode* n = dq.back();
                dq.pop_back();
                temp.push_back(n->val); 
               
                if (n->left) {
                    dq.push_front(n->left);
                }
                if (n->right) {
                    dq.push_front(n->right);
                }
            }
            res.insert(res.begin(), temp);
        }
        return res;
    }
};