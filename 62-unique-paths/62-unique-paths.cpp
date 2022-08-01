class Solution {
public:
    int uniquePaths(int m, int n) {
        /*
        }ek robot hai ek matrix ke mxn grid pr
        }ab dekho m row aur n column ko denote kr rha hai
        }filhal robot 0,0 position pr hai aur usey last position pr jaana hai matrix ke
        }3,4 matrix maa lete hn
          1  2  3  4
        1 X
        2       X
        3           
        }bottom right pr aana chahiye mtlb grid[m-1][n-1] = grid[2][3]
        }ab yeh robot sirf down aur right hi move kr skta hai
        */
        
        // step-1 create a 2d matrix of mxn size and put 1 in all the grids
        
        vector<vector<int>> dp(m,vector<int>(n,1));
        
        // step-2 traverse the matrix and sum up the indexes above and left index. for eg- lets take a                       grid 
        for(int i=1;i<m;i++)
        {
            for(int j=1;j<n;j++)
            {
                dp[i][j] = dp[i-1][j] + dp[i][j-1];
            }
        }
        return dp[m-1][n-1];
    }
};