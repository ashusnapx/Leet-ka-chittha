#include <vector>

class Solution
{
    public:
        int factorial(int n)
        {
            if (n == 0 || n == 1)
                return 1;
            return n* factorial(n - 1);
        }

    void generateCombinations(int n, int k, int start, vector<int> &current, vector<vector< int>> &ans)
    {
        if (current.size() == k)
        {
            ans.push_back(current);
            return;
        }

        for (int i = start; i <= n; ++i)
        {
            current.push_back(i);
            generateCombinations(n, k, i + 1, current, ans);
            current.pop_back();
        }
    }

    vector<vector < int>> combine(int n, int k)
    {
        vector<vector < int>> ans;
        vector<int> current;
        generateCombinations(n, k, 1, current, ans);
        return ans;
    }
};