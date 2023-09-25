class Solution
{
    public:
        int maxPower(string s)
        {
            int maxi = 1, count = 1;
            for (int i = 0; i < s.length() - 1; i++)
            {
                if (s[i] == s[i + 1])
                {
                    count++;
                    if (count > maxi)
                    {
                        maxi = count;
                    }
                }
                else
                {
                    count = 1;
                }
            }

            return maxi;
        }
};