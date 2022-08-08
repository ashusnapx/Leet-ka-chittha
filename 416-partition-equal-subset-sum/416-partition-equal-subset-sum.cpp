class Solution
{
    public:
        bool helper(vector<int> nums, int size, int sum)
        {
            bool t[size + 1][sum + 1]; // 4+1,11+1,5,12
            for (int i = 0; i < size + 1; i++)
            {
                t[i][0] = true;
            }
            for (int j = 0; j < sum + 1; j++)
            {
                t[0][j] = false;
            }
            t[0][0] = true;

            for (int i = 1; i < size + 1; i++)
            {
                for (int j = 1; j < sum + 1; j++)
                {
                    if (nums[i - 1] <= j)
                    {
                        t[i][j] = t[i - 1][j - nums[i - 1]] || t[i - 1][j];
                    }
                    else
                    {
                        t[i][j] = t[i - 1][j];
                    }
                }
            }

            return t[size][sum];
        }
    bool canPartition(vector<int> &nums)
    {
        int n = nums.size();
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += nums[i];
        }

        if (sum % 2 != 0)
        {
            return false;
        }

        return helper(nums, n, sum / 2);
    }
};