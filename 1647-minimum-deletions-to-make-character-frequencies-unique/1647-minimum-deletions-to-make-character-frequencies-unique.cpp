class Solution
{
    public:
        int minDeletions(string s)
        {
            unordered_map<char, int> mp;
            int n = s.length();
            for (int i = 0; i < n; i++)
            {
                mp[s[i]]++;
            }

            unordered_set<int> freqSet;
            int count = 0;

            for (auto i: mp)
            {
                while (freqSet.count(i.second))
                {
                    i.second--;
                    count++;
                }
                if (i.second > 0) freqSet.insert(i.second);
            }

            return count;
        }
};