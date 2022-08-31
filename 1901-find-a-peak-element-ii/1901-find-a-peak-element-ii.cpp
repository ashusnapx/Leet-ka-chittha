class Solution
{
    public:
        vector<int> findPeakGrid(vector<vector < int>> &mat)
        {
            priority_queue<pair<int, pair<int, int>>> pq;
            int m = mat.size();
            int n = mat[0].size();
            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    pq.push({ mat[i][j],{i,j} });
                }
            }

            vector<int> ans;
            ans.push_back(pq.top().second.first);
            ans.push_back(pq.top().second.second);
            return ans;
        }
};