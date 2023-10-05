class Solution
{
    public:
        vector<int> majorityElement(vector<int> &nums)
        {
            vector<int> ans;
            unordered_map<int, int> freq;
            int n = nums.size();
            double a = n / 3.0;
            int major = floor(a);

            for (auto i: nums)
            {
                freq[i]++;
            }

            for (auto p: freq)
            {
                if (p.second > major) ans.push_back(p.first);
            }
            return ans;
        }
};