class Solution
{
    public:
        int countWords(vector<string> &w1, vector<string> &w2)
        {
            map<string, int> mp1, mp2;
            for (auto i: w1) mp1[i]++;
            for (auto i: w2) mp2[i]++;

            vector<string> ans;
            for (auto it = mp1.begin(); it != mp1.end(); ++it)
            {
                for (auto iq = mp2.begin(); iq != mp2.end(); ++iq)
                {
                    if (it->first == iq->first and it->second == 1 and iq->second == 1)
                    {
                        ans.push_back(it->first);
                    }
                }
            }

            return ans.size();
        }
};