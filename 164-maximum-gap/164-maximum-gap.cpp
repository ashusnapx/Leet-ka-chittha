class Solution
{
    public:
        int maximumGap(vector<int> &nums)
        {
            sort(nums.begin(), nums.end());
            if (nums.size() < 2)
            {
                return 0;
            }

            int maxDiff = INT_MIN;
            for (int i = 0; i < nums.size() - 1; i++)
            {
                if (abs(nums[i]-nums[i+1]) > maxDiff)
                {
                    maxDiff = abs(nums[i]-nums[i+1]);
                }
            }
            return maxDiff;
        }
};