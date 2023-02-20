class Solution
{
    public:
        int searchInsert(vector<int> &nums, int target)
        {
            for (int i = 0; i < nums.size(); i++)
            {
                if (nums[i] == target)
                {
                    return i;
                }
            }
            nums.push_back(target);
            sort(nums.begin(), nums.end());
            int lo = 0;
            int hi = nums.size() - 1;
            while (lo <= hi)
            {
                int mid = lo + (hi - lo) / 2;
                if (nums[mid] == target) return mid;
                else if (nums[mid] < target)
                {
                    lo = mid + 1;
                }
                else	//if(nums[mid] > target)
                {
                    hi = mid - 1;
                }
            }
            return -1;
        }
};