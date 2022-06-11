class Solution
{
    public:
        int minOperations(vector<int> &nums, int x)
        {
            int n = nums.size();

            int l[n], r[n];
            int ls = 0, rs = 0;

           	//  Prefix sum from left and right sides.
            for (int i = 0; i < n; i++)
            {
                ls += nums[i];
                l[i] = ls;
            }
            for (int i = n - 1; i >= 0; i--)
            {
                rs += nums[i];
                r[i] = rs;
            }

           	//To store number of operations and find minimum later.
            vector<int> ops;

           	//Check sum prefixes to see if the number x is present there.

           	// From sum starting from left.
            int op = 0;
            for (int i = 0; i < n; i++)
            {
                if (l[i] > x)
                    break;
                else if (l[i] == x)
                {
                    op = i + 1;
                    ops.push_back(op);
                }
            }

           	// From sum starting from right.
            op = 0;
            for (int i = n - 1; i >= 0; i--)
            {
                if (r[i] > x)
                    break;
                else if (r[i] == x)
                {
                    op = nums.size() - i;
                    ops.push_back(op);
                }
            }

           	//Binary search to see if it is possible from both left and right sum prefixes to obtain x.
            for (int i = 0; i < n - 1; i++)
            {
                op = 0;

                if (l[i] >= x)
                    break;
                else
                {
                    int diff = x - l[i];
                    int hi = n - 1, lo = 0, mid;

                    while (hi - lo > 1)
                    {
                        mid = (hi + lo) / 2;

                        if (r[mid] > diff)
                            lo = mid + 1;
                        else
                            hi = mid;
                    }

                    if (r[lo] == diff && lo != i)
                    {
                        op = (i + 1) + (n - lo);
                        ops.push_back(op);
                    }
                    else if (r[hi] == diff && hi != i)
                    {
                        op = (i + 1) + (n - hi);
                        ops.push_back(op);
                    }
                }
            }

            if (ops.size() != 0)
                return* min_element(ops.begin(), ops.end());
            else
                return -1;
        }
};