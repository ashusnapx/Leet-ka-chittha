class Solution
{
    public:
        int trap(vector<int> &h)
        {
            int n = h.size();
            int mxl[n];
            int mxr[n];

            mxl[0] = h[0];
            for (int i = 1; i < n; i++)
            {
                mxl[i] = max(mxl[i - 1], h[i]);
            }

            mxr[n - 1] = h[n - 1];
            for (int i = n - 2; i >= 0; i--)
            {
                mxr[i] = max(mxr[i + 1], h[i]);
            }

            int water[n];
            for (int i = 0; i < n; i++)
            {
                water[i] = min(mxl[i], mxr[i]) - h[i];
            }

            int sum = 0;
            for (int i = 0; i < n; i++)
            {
                sum += water[i];
            }
            return sum;
        }
};