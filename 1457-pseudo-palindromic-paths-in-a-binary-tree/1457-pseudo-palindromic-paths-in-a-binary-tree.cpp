class Solution
{
    public:
        void solve(TreeNode *root, unordered_map<int, int> &m, int &ans)
        {

            if (!root) return;

            m[root->val]++;

            if (!root->left && !root->right)
            {
                int cnt = 0;
                for (auto i: m) cnt += (i.second % 2 != 0);
                ans += (cnt <= 1);
            }

            if (root->left) solve(root->left, m, ans);
            if (root->right) solve(root->right, m, ans);
            m[root->val]--;
        }

    int pseudoPalindromicPaths(TreeNode *root)
    {
        unordered_map<int, int> m;
        int ans = 0;
        solve(root, m, ans);
        return ans;
    }
};