class Solution
{
    public:
        vector<vector < int>> kClosest(vector<vector < int>> &points, int k)
        {
            priority_queue<pair<int, vector< int>>> pq;
            for (auto p: points)
            {
                int x = p[0] *p[0] + p[1] *p[1];
                pq.push({ x,
                    p });
            }

            vector<vector < int>> res;
            while (!pq.empty())
            {
                if (pq.size() <= k)
                    res.push_back({ pq.top().second });
                pq.pop();
            }
            return res;
        }
};