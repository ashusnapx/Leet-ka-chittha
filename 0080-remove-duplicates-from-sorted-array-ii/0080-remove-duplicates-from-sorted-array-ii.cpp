class Solution
{
    public:
        int removeDuplicates(vector<int> &nums)
        {
            map<int, int> mp;
            for (auto i: nums) mp[i]++;

            vector<int> ans;
            for (auto a: mp)
            {
                if (a.second <= 2)
                {
                    for (int i = 0; i < a.second; i++)
                    {
                        ans.push_back(a.first);
                    }
                }
                else
                {
                    for (int i = 0; i < 2; i++)
                    {
                        ans.push_back(a.first);
                    }
                }
            }

            nums = ans;
            return ans.size();
        }
};