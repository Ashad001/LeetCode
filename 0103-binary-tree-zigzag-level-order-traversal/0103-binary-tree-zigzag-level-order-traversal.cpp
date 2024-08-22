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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans; 
        
        if (!root) {
            return ans;
        }
        
        deque<TreeNode*> q;
        q.push_front(root);
        bool flag = true; // True For Normal/Zig , Flase For Reverse/Zag
        
        while(!q.empty()) {
            vector<int> temp;
            int s = q.size();
            for (int i = 0; i < s; i++) {
                if (flag) {
                    TreeNode* n = q.front();
                    q.pop_front();
                    temp.push_back(n->val);
                    if (n->left != nullptr) {
                        q.push_back(n->left);
                    }    
                    if (n->right != nullptr) {
                        q.push_back(n->right);
                    }
                } else {
                    TreeNode* n = q.back();
                    q.pop_back();
                    temp.push_back(n->val);
                    if (n->right != nullptr) {
                        q.push_front(n->right);
                    }
                    if (n->left != nullptr) {
                        q.push_front(n->left);
                    }
                }
            }
            flag = !flag;

            
            ans.push_back(temp);
        }
        return ans;
    }
};