class Solution
{
    public:
        int firstUniqChar(string s)
        {
            map<char, int> m;
            int ans = -1;
            for (auto i: s) m[i]++;
            for (int i = 0; i < s.length(); i++)
            {
                if (m[s[i]] == 1)
                {
                    ans = i;
                    break;
                }
            }
            return ans;
        }
};