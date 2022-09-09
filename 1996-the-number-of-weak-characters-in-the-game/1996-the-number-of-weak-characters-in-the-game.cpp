class Solution
{
    public:
       	// int numberOfWeakCharacters(vector<vector < int>> &properties)
       	// {
       	//     int m = properties.size();
       	//     int count = 0;
       	//     for (int i = 0; i < m; i++)
       	//     {
       	//         for (int j = 0; j < m; j++)
       	//         {
       	//             if ((properties[i][0] < properties[j][0] and properties[i][1] < properties[j][1]) or(properties[i][0] < properties[j][0] and properties[i][1] < properties[j][1]))
       	//             {
       	//                 count++;
       	//             }
       	//         }
       	//     }
       	//     return count;
       	// }

        struct cmp
        {
            bool operator()(const vector<int> &x, const vector<int> &y) const
            {
                if (x[0] == y[0]) return x[1] > y[1];
                return x[0] < y[0];
            }
        };

    int numberOfWeakCharacters(vector<vector < int>> &properties)
    {
        sort(properties.begin(), properties.end(), cmp());
        int n = properties.size();

        int y_max = INT_MIN, ans = 0;
        for (int i = n - 1; i >= 0; --i)
        {
            if (properties[i][1] < y_max) ++ans;
            y_max = max(y_max, properties[i][1]);
        }
        return ans;
    }
};