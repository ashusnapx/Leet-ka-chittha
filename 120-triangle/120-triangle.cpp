class Solution
{
    public:
        int minimumTotal(vector<vector < int>> &triangle)
        {
           	// int sum = 0;
           	// if(triangle[0][0] < 0)
           	// {
           	//     return triangle[0][0];
           	// }
           	// for (int i = 0; i < triangle.size(); i++)
           	// {
           	//     sort(triangle[i].begin(), triangle[i].end());
           	//     for (int j = 0; j < triangle[i].size(); i++)
           	//     {
           	//         sum += triangle[i][0];
           	//         break;
           	//     }
           	// }
           	// return sum;

           	//             int len = triangle.size();
           	//             vector<int> dp(len, 0);
           	//             for (int i = 0; i < len; i++)
           	//             {
           	//                 dp[i] = triangle[len - 1][i];
           	//             }

           	//             for (int i = len - 2; i >= 0; i--)
           	//             {
           	//                 for (int j = 0; j < triangle[i].size(); j++)
           	//                 {
           	//                     dp[i] = min(dp[j], dp[j + 1]) + triangle[i][j];
           	//                 }
           	//             }
           	//             return dp[0];

            
                for (int i = triangle.size() - 2; i >= 0; i--)
                {
                    for (int j = 0; j < triangle[i].size(); j++)
                    {
                        triangle[i][j] += min(triangle[i + 1][j + 1], triangle[i + 1][j]);
                    }
                }
                return triangle[0][0];
            }
        
};