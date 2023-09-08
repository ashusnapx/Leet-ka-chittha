bool compare(const pair<int, int> &a, const pair<int, int> &b)
{
    if (a.second == b.second)
    {
        return a.first > b.first;	// For ascending order if second element is equal
    }
    return a.second < b.second;	// Compare second elements in ascending order
}

class Solution
{
    public:
        vector<int> frequencySort(vector<int> &nums)
        {
            map<int, int> m;
            for (auto i: nums)
            {
                m[i]++;
            }
            vector<pair<int, int>> v(m.begin(), m.end());
            sort(v.begin(), v.end(), compare);
            vector<int> ans;
            for (auto q: v)
            {
                for (int i = 0; i < q.second; i++)
                {
                    ans.push_back(q.first);
                }
            }
            return ans;
        }
};