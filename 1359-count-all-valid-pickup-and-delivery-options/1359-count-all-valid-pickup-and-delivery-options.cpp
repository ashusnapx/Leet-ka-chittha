long long nc2(int n)
{
    return (n *(n - 1)) / 2;
}
class Solution
{
    public:
        int countOrders(int n)
        {
            long long res = 1, mod = 1e9 + 7;
            int k;
            for (int i = 1; i < n; i++)
            {
                k = 2 *(i) + 1;
                res = ((k + nc2(k)) % mod *res) % mod;
            }

            return res;
        }
};