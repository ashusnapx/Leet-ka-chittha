class Solution
{
    public:
//         int maxSubArray(vector<int> &nums)
//         {
//             int sum = 0, maxi = INT_MIN;

//             for (auto i: nums)
//             {
//                 sum += i;

//                 if (sum < 0) sum = 0;
//                 if (sum > maxi) maxi = sum;
//             }
//             if (maxi < 0) return -1;
//             else if (maxi == 0) return 0;
//             return maxi;
//         }

    int maxSubArray(vector<int> &nums)
    {
        int sum = 0, maxi = INT_MIN;

        for (auto i: nums)
        {
            sum += i;

            maxi = max(sum, maxi);

            if (sum < 0) sum = 0;
        }

        return maxi;
    }
};