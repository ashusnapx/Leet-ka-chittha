class Solution
{
    public:
        int count(int n)
        {
            if (n == 0) return 0;
            int count = 0;
            while (n > 0)
            {
                if (n &1 == 1)
                {
                    count++;
                    n >>= 1;
                }
                else
                {
                    n >>= 1;
                }
            }

            return count;
        }
    int minBitFlips(int start, int goal)
    {
        int newGoal = start ^ goal;
        return count(newGoal);
    }
};