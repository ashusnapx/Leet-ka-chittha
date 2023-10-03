class Solution
{
    public:
        int numIdenticalPairs(vector<int> &nums)
        {
            vector<pair<int, int>> v;
            int n = nums.size();
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (i != j and i < j and nums[i] == nums[j])
                    {
                        v.push_back({ i,
                            j });
                    }
                }
            }
            return v.size();
        }
};