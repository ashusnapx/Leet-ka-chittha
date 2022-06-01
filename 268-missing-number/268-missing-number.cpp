class Solution
{
    public:
        int missingNumber(vector<int> &nums)
        {
            int sizeOfVector = nums.size();
            int sumOfRange = sizeOfVector *(sizeOfVector + 1) / 2;
            int sumOfVector = 0;
            for (int i = 0; i < sizeOfVector; i++)
            {
                sumOfVector += nums[i];
            }
            return sumOfRange - sumOfVector;
        }
};