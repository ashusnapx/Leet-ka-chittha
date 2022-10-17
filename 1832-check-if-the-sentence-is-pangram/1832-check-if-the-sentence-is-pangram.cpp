class Solution
{
    public:
        bool checkIfPangram(string s)
        {
            if (s.length() < 26)
            {
                return false;
            }
            vector<bool> v(26, false);
            int index;
            for (int i = 0; i < s.length(); i++)
            {
                if (s[i] >= 'a'
                    and s[i] <= 'z')
                {
                    index = s[i] - 'a';
                }

                v[index] = true;
            }

            for (int i = 0; i < v.size(); i++)
            {
                if (v[i] == false)
                {
                    return false;
                }
            }

            return true;
        }
};