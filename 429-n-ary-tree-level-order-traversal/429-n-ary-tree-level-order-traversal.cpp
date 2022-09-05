/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution
{
    public:
        vector<vector < int>> levelOrder(Node *root)
        {
            vector<vector < int>> ans;
            if (root == nullptr) return ans;
            queue<Node*> q;
            q.push(root);
            while (!q.empty())
            {
                int size = q.size();
                vector<int> level;
                for (int i = 0; i < size; i++)
                {
                    Node *frontNode = q.front();
                    q.pop();
                    for (auto n: frontNode->children)
                    {
                        q.push(n);
                    }
                    level.push_back(frontNode->val);
                }
                ans.push_back(level);
            }
            return ans;
        }
};