class Solution
{
    map<char, int> m;
    public:
        bool issort(string s1, string s2)
        {
            int n = min(s1.length(), s2.length());
            int i = 0;
            while (i < n && s1[i] == s2[i]) i++;

            if (s1.size() == i) return true;
            else if (s2.size() == i) return false;
            return (m[s1[i]] < m[s2[i]]);
        }
    bool isAlienSorted(vector<string> &words, string order)
    {
        for (int i = 0; i < order.size(); i++)
            m[order[i]] = i;

        for (int i = 1; i < words.size(); i++)
        {

            if (!issort(words[i - 1], words[i])) return false;
        }
        return true;
    }
};