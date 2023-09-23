class Solution
{
    public:
        vector<string> uncommonFromSentences(string s1, string s2)
        {
            string s3 = s1 + " " + s2;
            istringstream iss(s3);
            map<string, int> mp;

            string word;
            while (iss >> word)
            {
                mp[word]++;
            }
            vector<string> ans;
            for (auto it: mp)
            {
                if (it.second == 1)
                {
                    ans.push_back(it.first);
                }
            }

            return ans;
        }
};