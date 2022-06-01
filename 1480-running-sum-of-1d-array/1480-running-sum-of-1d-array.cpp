class Solution
{
    public:
        vector<int> runningSum(vector<int> &nums)
        {
            /*lets take a example ->[1,2,3,4]
              rather than creating a new array, we should make changes in the               same array itself.
            */

            for (int i = 1; i < nums.size(); i++)
            {
                nums[i] = nums[i] + nums[i - 1];
            }

            return nums;
        }
};