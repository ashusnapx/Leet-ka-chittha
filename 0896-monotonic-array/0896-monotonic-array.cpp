class Solution
{
    public:
        bool isMonotonic(vector<int> &nums)
        {
            vector<int> temp = nums;
            sort(temp.begin(), temp.end());
            if (nums == temp) return true;

            temp = nums;
            sort(temp.begin(), temp.end(), greater<int> ());
            if (nums == temp) return true;

            return false;
        }
};