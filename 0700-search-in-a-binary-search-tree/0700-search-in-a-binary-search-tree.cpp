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
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root == NULL)
        {
            return NULL;
        }
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            TreeNode* curr = q.front();
            if(val == curr->val)
            {
                return curr;
            }
            else if(curr->left != NULL && val < curr->val)
            {
                q.push(curr->left);
            }
            else if(curr->right != NULL && val > curr->val) 
            {
                q.push(curr->right);
            }
            q.pop();
        }
        return NULL;
    }
};