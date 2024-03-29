class Solution
{
    public:
        int minDeletionSize(vector<string> &strs)
        {
            int cnt = 0;
            int m = strs[0].size();
            int n = strs.size();
            for (int i = 0; i < m; ++i)
            {
                for (int j = 0; j < n - 1; ++j)
                {
                    if (strs[j][i] > strs[j + 1][i])
                    {
                        cnt++;
                        break;
                    }
                }
            }
            return cnt;
        }
};