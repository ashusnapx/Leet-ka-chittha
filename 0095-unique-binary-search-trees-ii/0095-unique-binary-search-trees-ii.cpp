#include <vector>

// Include the header file that defines TreeNode
// #include "path/to/TreeNode.h"

class Solution {
public:
    std::vector<TreeNode*> generateTrees(int n) {
        if (n == 0)
            return {};
        return generateTrees(1, n);
    }
    
private:
    std::vector<TreeNode*> generateTrees(int start, int end) {
        std::vector<TreeNode*> result;
        if (start > end) {
            result.push_back(nullptr);
            return result;
        }
        
        for (int i = start; i <= end; ++i) {
            std::vector<TreeNode*> leftTrees = generateTrees(start, i - 1);
            std::vector<TreeNode*> rightTrees = generateTrees(i + 1, end);
            
            for (TreeNode* left : leftTrees) {
                for (TreeNode* right : rightTrees) {
                    TreeNode* root = new TreeNode(i);
                    root->left = left;
                    root->right = right;
                    result.push_back(root);
                }
            }
        }
        
        return result;
    }
};
