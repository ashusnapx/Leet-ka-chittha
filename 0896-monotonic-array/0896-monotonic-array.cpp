class Solution
{
    public:
        bool isMonotonic(vector<int> &nums)
        {
            int count = 0, count1 = 0;
            for (int i = 0; i < nums.size() - 1; i++)
            {
                if (nums[i] < nums[i + 1])
                {
                    count++;
                }
                else if (nums[i] > nums[i + 1])
                {
                    count1++;
                }
                // else if(nums[i] == nums[i+1])
                // {
                //     count++;
                //     count1++;
                // }
            }

            // if (count == nums.size() - 2) return true;
            // else if (count1 == nums.size() - 2) return true;
            // return false;
            
            if(count == 0 or count1 == 0) return true;
            return false;
        }
};