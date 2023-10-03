class Solution
{
    public:
        int numIdenticalPairs(vector<int> &nums)
        {
            unordered_map<int, int> mp;
            int n = nums.size();
            int total = 0;
            for (int i: nums)
            {
                mp[i]++;
            }
            for (pair<int,int> i: mp)
            {
                total += (i.second *(i.second - 1)) / 2;
            }

            return total;
        }
};