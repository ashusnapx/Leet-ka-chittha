class Solution
{
    public:
        int findMinArrowShots(vector<vector < int>> &points)
        {

            int n = points.size();
            sort(points.begin(), points.end());

            int cnt = n;
            int x = points[0][0];
            int y = points[0][1];

            for (int i = 1; i < n; i++)
            {
                if (points[i][0] <= y && points[i][0] >= x)
                {
                    x = points[i][0];
                    y = min(y, points[i][1]);
                    cnt--;
                }
                else
                {
                    x = points[i][0];
                    y = points[i][1];
                }
            }
            return cnt;
        }
};