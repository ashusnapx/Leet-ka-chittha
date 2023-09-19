class Solution
{
    public:
        int findDuplicate(vector<int> &nums)
        {
            unordered_map<int, int> m;
            for (auto i: nums) m[i]++;
            for (auto q: m)
            {
                if (q.second > 1) return q.first;
            }
            return -1;
        }
};