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
    void InOrder(TreeNode *root, vector<int> &arr)
    {
        if(root == NULL)
            return;
        InOrder(root->left, arr);
        arr.push_back(root->val);
        InOrder(root->right, arr);
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int> arr;   
        InOrder(root, arr);
        int i = 0, j = arr.size() - 1;
        while(i < j)
        {
            if(arr[i] + arr[j] == k)
                return true;
            else 
            {
                if(arr[i] + arr[j] < k)
                    i++;
                else
                    j--;
            }        
        }
        return false;
    }
};