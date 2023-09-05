class Solution
{
    public:
        vector<vector < int>> subsets(vector<int> &nums)
        {
            int n = nums.size();
            vector<vector < int>> ans;
            vector<int> ashu;
            ans.push_back(ashu);
            for (int i = 0; i < (1 << n); i++)
            {
                ashu.clear();
                for (int j = 0; j < n; j++)
                {
                    if (i &(1 << j))
                    {
                        ashu.push_back(nums[j]);
                    }
                }

                if (ashu.size() != 0)
                {
                    ans.push_back(ashu);
                }
            }
            return ans;
        }
};