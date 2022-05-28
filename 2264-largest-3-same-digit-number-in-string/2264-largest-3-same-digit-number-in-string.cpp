class Solution
{
    public:
        string largestGoodInteger(string num)
        {
            // sort(num.begin(), num.end());
            int maxi = INT_MIN;
            for (int i = 0; i < num.size() - 2; i++)
            {
                if (num[i] == num[i + 1] and num[i + 1] == num[i + 2])
                {
                    maxi = max(maxi, int(num[i]));
                }
            }

            string emp = "";
            if (maxi < 0)
            {
                return emp;
            }

            string ans = "";
            ans += char(maxi);
            ans += char(maxi);
            ans += char(maxi);

            return ans;
        }
};