class Solution
{
    public:
        int minCostConnectPoints(vector<vector < int>> &points)
        {
            int n = points.size(), ans = 0;
            auto manhattanDist =[](vector<int> &p1, vector<int> &p2)
            {
                return abs(p1[0] - p2[0]) + abs(p1[1] - p2[1]);
            };

            priority_queue<pair<int, pair<int, int>>,                 vector<pair<int, pair<int, int>>>,                 greater<pair<int, pair<int, int>>>> pq;

            vector<bool> visited(n, false);
            visited[0] = true;
            int connected = 1;

            for (int i = 1; i < n; i++)
            {
                pq.push({ manhattanDist(points[0], points[i]),
                    {
                        0,
                        i
                    } });
            }

            while (connected < n)
            {
                auto edge = pq.top();
                pq.pop();
                int cost = edge.first, from = edge.second.first, to = edge.second.second;

                if (visited[to]) continue;

                visited[to] = true;
                connected++;
                ans += cost;

                for (int i = 0; i < n; i++)
                {
                    if (!visited[i])
                    {
                        pq.push({ manhattanDist(points[to], points[i]),
                            {
                                to,
                                i
                            } });
                    }
                }
            }

            return ans;
        }
};