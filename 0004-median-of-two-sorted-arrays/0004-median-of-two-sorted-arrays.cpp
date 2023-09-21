class Solution
{
    public:
        double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
        {
            vector<int> ans;
            int i = 0, j = 0, n = nums1.size(), m = nums2.size();
            while (i < n and j < m)
            {
                if (nums1[i] < nums2[j])
                {
                    ans.push_back(nums1[i]);
                    i++;
                }
                else
                {
                    ans.push_back(nums2[j]);
                    j++;
                }
            }

            while (i < n)
            {
                ans.push_back(nums1[i]);
                i++;
            }

            while (j < m)
            {
                ans.push_back(nums2[j]);
                j++;
            }

            int d = ans.size();

            if (d % 2 == 0)
            {
                int mid = d / 2;
                int front = mid - 1;
                double ok = (ans[mid] + ans[front]) / 2.0;
                return ok;
            }

            return double(ans[d / 2]);
        }
};