class Solution
{
    vector<int> ans;

    private:
        void help(int num, int i, int n, int k)
        {
            if (i == n)
            {
                ans.push_back(num);
                return;
            }

           	// The last digit
            int d = num % 10;

           	// If the absolute difference is 0,
            if (k == 0)
            {
                int temp = (num *10) + d;
                help(temp, i + 1, n, k);
            }
            else
            {

               	// Check for +k
                if ((d + k) <= 9)
                {
                    int temp = (num *10) + (d + k);
                    help(temp, i + 1, n, k);
                }
               	// Check for -k
                if ((d - k) >= 0)
                {
                    int temp = (num *10) + (d - k);
                    help(temp, i + 1, n, k);
                }
            }
        }

    public:
        vector<int> numsSameConsecDiff(int n, int k)
        {

           	// Taking all digit from 1-9

            for (int i = 1; i <= 9; i++)
            {
                help(i, 1, n, k);
            }

            return ans;
        }
};