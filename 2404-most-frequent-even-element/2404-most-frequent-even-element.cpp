class Solution
{
    public:
        int mostFrequentEven(vector<int> &nums)
        {
            map<int, int, greater < int>> m;
            for (auto i: nums)
            {
                if (i % 2 == 0)	// Only consider even numbers
                    m[i]++;
            }

            int maxFreq = -1;
            int smallestEven = INT_MAX;

            for (auto q: m)
            {
                if (q.second >= maxFreq)
                {
                    maxFreq = q.second;
                    smallestEven = min(smallestEven, q.first);
                }
            }

            if (smallestEven == INT_MAX)
                return -1;

            return smallestEven;
        }
};