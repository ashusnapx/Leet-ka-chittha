class Solution
{
    private:

        bool isSafe(int row, vector<bool> &rowHash,
            int antiDiag, vector<bool> &antiHash,
            int mainDiag, vector<bool> &mainHash)
        {

            return rowHash[row] && antiHash[antiDiag] && mainHash[mainDiag];
        }

    void findConfigurations(int &n, int col, vector<bool> &rowHash, vector<bool> &antiHash, vector< bool > &mainHash,
        vector<string> &board, vector<vector< string>> &configs)
    {

        if (col == n)
        {
            configs.emplace_back(board);
            return;
        }

        for (int row = 0; row < n; row++)
        {
            if (!isSafe(row, rowHash, row + col, antiHash, row - col + n - 1, mainHash)) continue;

            rowHash[row] = false;
            antiHash[row + col] = false;
            mainHash[row - col + (n - 1)] = false;

            board[row][col] = 'Q';

            findConfigurations(n, col + 1, rowHash, antiHash, mainHash, board, configs);

            board[row][col] = '.';

            mainHash[row - col + (n - 1)] = true;
            antiHash[row + col] = true;
            rowHash[row] = true;
        }
    }

    public:

        vector<vector < string>> solveNQueens(int n)
        {

            vector<string> board(n, string(n, '.'));

            vector<vector < string>> configs;

            vector<bool> rowHash(n, true),
                antiDiagHash((n << 1) - 1, true),
                mainDiagHash((n << 1) - 1, true);

            findConfigurations(n, 0, rowHash, antiDiagHash, mainDiagHash, board, configs);

            return configs;
        }
};