class Solution
{
    public:
        vector<int> singleNumber(vector<int> &arr)
        {
            sort(arr.begin(), arr.end());
            vector<int> ans;
            int n = arr.size();
            if (n == 1) ans.push_back(arr[0]);
            for (int i = 0; i < n; i++)
            {
                if (i == 0)
                {
                    if (arr[i + 1] != arr[i])
                    {
                        ans.push_back(arr[i]);
                    }
                }
                else if (i == n - 1)
                {
                    if (arr[i] != arr[i - 1])
                    {
                        ans.push_back(arr[i]);
                    }
                }
                else
                {
                    if (arr[i] != arr[i + 1] and arr[i] != arr[i - 1])
                    {
                        ans.push_back(arr[i]);
                    }
                }
            }
            return ans;
        }
};