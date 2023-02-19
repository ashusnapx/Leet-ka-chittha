class Solution
{
    public:
        vector<vector < int>> zigzagLevelOrder(TreeNode *root)
        {
            vector<vector < int>> result;
            if (!root)
            {
                return result;
            }
            queue<TreeNode*> q;
            q.push(root);
            bool leftToRight = true;
            while (!q.empty())
            {
                int levelSize = q.size();
                vector<int> levelValues(levelSize);
                for (int i = 0; i < levelSize; i++)
                {
                    TreeNode *node = q.front();
                    q.pop();
                    int index = leftToRight ? i : levelSize - i - 1;
                    levelValues[index] = node->val;
                    if (node->left)
                    {
                        q.push(node->left);
                    }
                    if (node->right)
                    {
                        q.push(node->right);
                    }
                }
                result.push_back(levelValues);
                leftToRight = !leftToRight;
            }
            return result;
        }
};