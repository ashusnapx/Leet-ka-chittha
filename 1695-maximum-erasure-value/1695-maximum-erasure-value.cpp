class Solution
{
    public:
        int maximumUniqueSubarray(vector<int> &nums)
        {
            /*
            given,
            1. array of +ve integers = nums
            2. find a subarray of unique elements 
            3. return the max sum.
            4. subarray jo hai, woh contiguous hona chahiye
            */

            int curr_sum = 0;
            int max_sum = INT_MIN;
            map<int, bool> m;
            int n = nums.size();
            for (int left = 0, right = 0; right < n; right++)
            {
               	//till there are no duplicate elements in the window
                while (m[nums[right]])
                {
                    m[nums[left]] = false;
                    curr_sum -= nums[left];
                    left += 1;
                }
               	//if not in map
                m[nums[right]] = true;
                curr_sum += nums[right];
                max_sum = max(max_sum, curr_sum);
            }
            return max_sum;
        }
};