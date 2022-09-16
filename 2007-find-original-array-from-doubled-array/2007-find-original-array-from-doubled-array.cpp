class Solution
{
    public:
        vector<int> findOriginalArray(vector<int> &nums)
        {
            queue<int> q;
            sort(nums.begin(), nums.end());
            vector<int> ans;
            for (auto x: nums)
            {
                if (!q.empty() and x == q.front())
                    q.pop();
                else
                {
                    q.push(x *2);
                    ans.push_back(x);
                }
            }
            if (q.empty())
                return ans;
            return {};
        }
};