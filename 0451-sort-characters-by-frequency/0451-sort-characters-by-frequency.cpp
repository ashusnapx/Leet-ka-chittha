bool compare(const pair<char, int> &a, const pair<char, int> &b)
{
    if (a.second == b.second)	// same frequency hai bhai
    {
        return a.first < b.first;
    }
    return a.second > b.second;
}
class Solution
{
    public:
        string frequencySort(string s)
        {
            string ans = "";
            map<char, int> mp;
            for (auto i: s)
            {
                mp[i]++;
            }

            vector<pair<char, int>> v(mp.begin(), mp.end());
            sort(v.begin(), v.end(), compare);

            for (auto i: v)
            {
                ans += string(i.second, i.first);
            }

            return ans;
        }
};