class Solution
{
    public:
        int findFinalValue(vector<int> &nums, int original)
        {
            unordered_set<int> seen;

            while (seen.find(original) == seen.end())
            {
                seen.insert(original);
                auto it = find(nums.begin(), nums.end(), original);
                if (it != nums.end())
                {
                    original *= 2;
                }
                else
                {
                    break;
                }
            }

            return original;
        }
};