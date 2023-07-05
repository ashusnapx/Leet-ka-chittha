class Solution
{
    public:
        int longestSubarray(vector<int> &nums)
        {

            int l = 0, r = 0, ans = INT_MIN;
            bool has0 = false;
            for (auto i: nums)
            {
                if (i == 1)
                {
                    r += 1;
                }
                else
                {
                    has0 = true;
                    ans = max(ans, l + r);
                    l = r;
                    r = 0;
                }
            }
            ans = max(ans, l + r);
            return ans - (int)(!has0);
        }
};