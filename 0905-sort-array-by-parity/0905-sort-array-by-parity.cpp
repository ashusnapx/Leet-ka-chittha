class Solution
{
    public:
        vector<int> sortArrayByParity(vector<int> &nums)
        {
            vector<int> ans(nums.size());
            int evenIdx = 0;
            int oddIdx = nums.size() - 1;

            for (auto i: nums)
            {
                if (i % 2 == 0)
                {
                    ans[evenIdx++] = i;
                }
                else
                {
                    ans[oddIdx--] = i;
                }
            }

            return ans;
        }
};