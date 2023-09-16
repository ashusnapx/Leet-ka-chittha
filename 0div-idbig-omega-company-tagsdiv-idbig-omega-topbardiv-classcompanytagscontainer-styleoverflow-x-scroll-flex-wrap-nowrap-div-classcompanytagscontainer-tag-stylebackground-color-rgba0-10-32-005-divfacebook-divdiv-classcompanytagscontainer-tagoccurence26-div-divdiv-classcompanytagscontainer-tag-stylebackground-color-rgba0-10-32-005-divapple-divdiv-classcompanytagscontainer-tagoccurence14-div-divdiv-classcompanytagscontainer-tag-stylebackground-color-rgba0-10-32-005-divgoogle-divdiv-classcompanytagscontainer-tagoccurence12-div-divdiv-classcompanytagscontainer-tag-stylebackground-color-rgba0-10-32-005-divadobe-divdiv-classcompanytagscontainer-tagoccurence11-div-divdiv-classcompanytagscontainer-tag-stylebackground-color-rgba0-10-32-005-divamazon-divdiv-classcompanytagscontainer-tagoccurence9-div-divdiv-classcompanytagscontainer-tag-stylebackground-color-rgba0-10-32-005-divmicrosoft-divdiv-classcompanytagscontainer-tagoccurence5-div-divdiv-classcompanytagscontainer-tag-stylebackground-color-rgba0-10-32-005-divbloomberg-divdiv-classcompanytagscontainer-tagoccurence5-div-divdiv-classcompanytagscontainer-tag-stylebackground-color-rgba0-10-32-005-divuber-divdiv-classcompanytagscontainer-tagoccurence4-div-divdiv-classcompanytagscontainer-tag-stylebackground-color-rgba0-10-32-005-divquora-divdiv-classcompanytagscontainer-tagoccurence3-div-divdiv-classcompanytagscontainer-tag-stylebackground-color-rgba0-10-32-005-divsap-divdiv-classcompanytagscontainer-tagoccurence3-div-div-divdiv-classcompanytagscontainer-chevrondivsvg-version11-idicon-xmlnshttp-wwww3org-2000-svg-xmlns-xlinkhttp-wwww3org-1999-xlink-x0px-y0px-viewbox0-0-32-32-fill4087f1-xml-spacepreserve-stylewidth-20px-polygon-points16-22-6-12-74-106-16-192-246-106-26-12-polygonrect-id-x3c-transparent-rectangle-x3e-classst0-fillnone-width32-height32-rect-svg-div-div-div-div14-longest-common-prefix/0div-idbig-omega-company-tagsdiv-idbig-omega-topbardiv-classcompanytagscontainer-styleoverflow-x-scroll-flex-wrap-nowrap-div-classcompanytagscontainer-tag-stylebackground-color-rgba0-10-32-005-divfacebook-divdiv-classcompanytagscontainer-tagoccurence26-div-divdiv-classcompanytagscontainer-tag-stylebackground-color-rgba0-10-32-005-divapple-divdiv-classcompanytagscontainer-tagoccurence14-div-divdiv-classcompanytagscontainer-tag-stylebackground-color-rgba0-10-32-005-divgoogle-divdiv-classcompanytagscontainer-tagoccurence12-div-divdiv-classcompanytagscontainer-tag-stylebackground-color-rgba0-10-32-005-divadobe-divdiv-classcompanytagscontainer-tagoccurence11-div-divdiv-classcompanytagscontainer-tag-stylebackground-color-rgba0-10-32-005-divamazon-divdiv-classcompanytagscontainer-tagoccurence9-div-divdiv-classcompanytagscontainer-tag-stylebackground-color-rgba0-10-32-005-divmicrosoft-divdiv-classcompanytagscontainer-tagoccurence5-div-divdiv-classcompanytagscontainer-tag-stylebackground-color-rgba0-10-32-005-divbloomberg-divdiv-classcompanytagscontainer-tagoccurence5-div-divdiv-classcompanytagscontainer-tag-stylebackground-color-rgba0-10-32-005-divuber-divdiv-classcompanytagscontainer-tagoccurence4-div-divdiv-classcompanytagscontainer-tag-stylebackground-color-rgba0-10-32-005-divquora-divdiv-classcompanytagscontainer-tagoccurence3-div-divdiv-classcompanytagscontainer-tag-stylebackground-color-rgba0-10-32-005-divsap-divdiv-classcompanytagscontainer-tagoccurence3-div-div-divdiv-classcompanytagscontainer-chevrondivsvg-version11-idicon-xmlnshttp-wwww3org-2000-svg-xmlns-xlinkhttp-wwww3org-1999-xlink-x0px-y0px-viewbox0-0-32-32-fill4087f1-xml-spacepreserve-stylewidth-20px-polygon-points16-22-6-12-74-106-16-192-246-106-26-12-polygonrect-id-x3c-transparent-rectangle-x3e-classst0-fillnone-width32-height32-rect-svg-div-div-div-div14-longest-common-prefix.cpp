class Solution
{
    public:
        string longestCommonPrefix(vector<string> &s)
        {
            sort(s.begin(), s.end());

            int n = s[0].length(), m = s[s.size() - 1].length();
            int rg = min(n, m);
            string c = "";
            for (int i = 0; i < rg; i++)
            {
                if (s[0][i] != s[s.size() - 1][i]) break;
                c += s[0][i];
            }
            return c;
        }
};