class Solution
{
    public:
        int mySqrt(int x)
        {
            if (x <= 1) return x;

            int lo = 0, hi = x, ans;
            while (lo <= hi)
            {

                long int mid = (lo + hi) / 2;
                if (mid*mid <= x)
                {

                    ans = mid;
                    lo = mid + 1;
                }
                else hi = mid - 1;
            }

            return ans;
        }
};