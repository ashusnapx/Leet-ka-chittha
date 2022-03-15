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
    vector<int> output;
    void preorder(TreeNode* t)
    {
        if(t!=nullptr)
        {
            output.push_back(t->val);
            preorder(t->left);
            preorder(t->right);  
        }
    }
    vector<int> preorderTraversal(TreeNode* root) 
    {
        preorder(root);
        return output;
    }
};