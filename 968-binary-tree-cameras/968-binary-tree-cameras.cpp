/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *    int val;
 *    TreeNode * left;
 *    TreeNode * right;
 *    TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *};
 */
class Solution
{
    int minCameraCover__(TreeNode *root, int &cam)
    {
        if (!root)
            return 1;	//if null, then no cam needed, return 1 
        int lchild = minCameraCover__(root->left, cam);
        int rchild = minCameraCover__(root->right, cam);

        if (lchild == -1 || rchild == -1)
        {
        	// if any of right or left child needs cam, parent will install cam and return 0  to indicate that it's having cam installed, so it's parent can avoid by returning 1
            cam++;
            return 0;
        }
        if (lchild == 0 || rchild == 0) return 1;	//if cam already installed on node, return 1 that indicated my child is having cam and i don't need any cam

        return -1;	// return -1 indicated that none of my child has cam installed and also they are covered by any other node as they are returning 1. So, i will return condition to my parent that i need a cam.
    }
    public:
        int minCameraCover(TreeNode *root)
        {
            int cameras = 0;
            int ans = minCameraCover__(root, cameras);
            if (ans == -1) cameras++;	//  if root returns -1 thats means it's child are covered and not having cameras installed. So, it indicates -1 to install camera.

            return cameras;
        }
};