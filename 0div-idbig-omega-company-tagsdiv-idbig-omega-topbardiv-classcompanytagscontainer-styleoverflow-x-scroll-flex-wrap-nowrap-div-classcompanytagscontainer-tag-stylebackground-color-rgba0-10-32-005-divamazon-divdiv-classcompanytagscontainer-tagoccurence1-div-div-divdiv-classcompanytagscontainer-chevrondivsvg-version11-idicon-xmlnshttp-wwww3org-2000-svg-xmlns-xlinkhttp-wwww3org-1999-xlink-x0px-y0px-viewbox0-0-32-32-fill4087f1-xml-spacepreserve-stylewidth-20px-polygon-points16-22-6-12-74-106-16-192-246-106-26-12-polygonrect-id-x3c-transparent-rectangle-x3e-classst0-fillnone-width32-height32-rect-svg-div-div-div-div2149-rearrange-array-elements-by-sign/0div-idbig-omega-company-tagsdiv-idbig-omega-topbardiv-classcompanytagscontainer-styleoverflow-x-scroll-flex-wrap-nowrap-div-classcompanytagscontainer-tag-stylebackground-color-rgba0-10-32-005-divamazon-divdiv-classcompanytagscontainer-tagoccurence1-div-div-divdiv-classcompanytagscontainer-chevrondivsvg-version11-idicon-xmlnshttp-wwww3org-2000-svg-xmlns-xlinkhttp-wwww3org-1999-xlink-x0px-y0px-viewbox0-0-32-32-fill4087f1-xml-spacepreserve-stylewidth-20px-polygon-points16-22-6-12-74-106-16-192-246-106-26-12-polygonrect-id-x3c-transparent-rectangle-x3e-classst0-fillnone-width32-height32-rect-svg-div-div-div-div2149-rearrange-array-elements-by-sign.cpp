class Solution
{
    public:
        vector<int> rearrangeArray(vector<int> &nums)
        {
            vector<int> ans;
            stack<int> one, two;
            // stack<int> two;
            for (auto i: nums)
            {
                if (i < 0) one.push(i);
                else two.push(i);
            }

            while (!one.empty())
            {
                ans.push_back(one.top());
                one.pop();
                ans.push_back(two.top());
                two.pop();
            }
            reverse(ans.begin(), ans.end());
            return ans;
        }
};