class Solution
{
    public:
        vector<int> addToArrayForm(vector<int> &num, int k)
        {
            int n = num.size(), carry = k, i = n - 1;
            vector<int> lo;
            while (i >= 0 || carry > 0)
            {
                if (i >= 0)
                {
                    carry += num[i];
                }
                lo.push_back(carry % 10);
                carry /= 10;
                i--;
            }
            reverse(lo.begin(), lo.end());
            return lo;
        }
};