class Solution
{
    public:
        void rotate(vector<vector < int>> &ma)
        {
            int n = ma.size(), m = ma[0].size();
            vector<vector < int>> ans;
            for (int i = 0; i < n; i++)
            {
                vector<int> ans2;
                for (int j = m - 1; j >= 0; j--)
                {
                    ans2.push_back(ma[j][i]);
                }
                ans.push_back(ans2);
            }

            ma = ans;
        }
};