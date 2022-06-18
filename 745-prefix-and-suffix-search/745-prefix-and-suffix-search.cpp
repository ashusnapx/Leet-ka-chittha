class WordFilter
{
    public:
        unordered_map<string, int> m;
    WordFilter(vector<string> &words)
    {
        for (int i = 0; i < words.size(); i++)
        {
            string s = "";
            for (int p = 0; p < words[i].length(); p++)
            {
                s += words[i][p];
                for (int q = 0; q < words[i].length(); q++)
                {
                    string t = s;
                    t += '.';
                    t += words[i].substr(q, words[i].length() - q);
                    m[t] = i;
                }
            }
        }
    }

    int f(string prefix, string suffix)
    {
        prefix += '.';
        prefix += suffix;
        if (m.find(prefix) != m.end())
            return m[prefix];
        return -1;
    }
};

/**
 *Your WordFilter object will be instantiated and called as such:
 *WordFilter* obj = new WordFilter(words);
 *int param_1 = obj->f(prefix,suffix);
 */