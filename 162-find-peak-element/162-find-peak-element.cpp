class Solution
{
    public:
        int findPeakElement(vector<int> &nums)
        {
            int n = nums.size();
            priority_queue<pair<int, int>> pq;
            for (int i = 0; i < n; i++)
            {
                pq.push({ nums[i],
                    i });
            }

            return pq.top().second;
        }
};