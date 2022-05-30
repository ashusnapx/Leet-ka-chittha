class Solution
{
    public:
        int mySqrt(int x)
        {
            if (x <= 1) return x;

            int lo = 0, hi = x, ans;
            while (lo <= hi)
            {
            	// looping to get ans
                long int mid = (lo + hi) / 2;	// find the mid value
                if (mid <= x / mid)
                {
                	// if mid * mid <= x ; we can use mid as temporary ans | change if new condn. met.
                    ans = mid;
                    lo = mid + 1;	// update lo; to get new ans if possible
                }
                else hi = mid - 1;	// else just decrease the hi to mid-1
            }

            return ans;	// return the final ans.
        }
};