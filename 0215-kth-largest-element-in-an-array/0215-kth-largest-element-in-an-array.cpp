class Solution
{
    public:
        int findKthLargest(vector<int> &nums, int k)
        {
            priority_queue<int, vector<int>, greater < int>> p;
            for (auto i: nums)
            {
                p.push(i);
                if (p.size() > k) p.pop();
            }
            return p.top();
        }
};