class Solution
{
    public:
        char findTheDifference(string s, string t)
        {
            string a = s + t;
            char result = 0;
            for (auto i: a)
            {
                result ^= i;
            }
            return result;
        }
};