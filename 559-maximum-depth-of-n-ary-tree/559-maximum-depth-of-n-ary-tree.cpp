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

class Solution {
public:
    int maxDepth(Node* root) {
       if(root==NULL) return NULL;
         int max = 0;
        for(int i=0;i<root->children.size();i++)
        {
            int test = maxDepth(root->children[i]);
            if(max<test)
            {
                max = test;
            }
        }
        return max+1;
    }
};