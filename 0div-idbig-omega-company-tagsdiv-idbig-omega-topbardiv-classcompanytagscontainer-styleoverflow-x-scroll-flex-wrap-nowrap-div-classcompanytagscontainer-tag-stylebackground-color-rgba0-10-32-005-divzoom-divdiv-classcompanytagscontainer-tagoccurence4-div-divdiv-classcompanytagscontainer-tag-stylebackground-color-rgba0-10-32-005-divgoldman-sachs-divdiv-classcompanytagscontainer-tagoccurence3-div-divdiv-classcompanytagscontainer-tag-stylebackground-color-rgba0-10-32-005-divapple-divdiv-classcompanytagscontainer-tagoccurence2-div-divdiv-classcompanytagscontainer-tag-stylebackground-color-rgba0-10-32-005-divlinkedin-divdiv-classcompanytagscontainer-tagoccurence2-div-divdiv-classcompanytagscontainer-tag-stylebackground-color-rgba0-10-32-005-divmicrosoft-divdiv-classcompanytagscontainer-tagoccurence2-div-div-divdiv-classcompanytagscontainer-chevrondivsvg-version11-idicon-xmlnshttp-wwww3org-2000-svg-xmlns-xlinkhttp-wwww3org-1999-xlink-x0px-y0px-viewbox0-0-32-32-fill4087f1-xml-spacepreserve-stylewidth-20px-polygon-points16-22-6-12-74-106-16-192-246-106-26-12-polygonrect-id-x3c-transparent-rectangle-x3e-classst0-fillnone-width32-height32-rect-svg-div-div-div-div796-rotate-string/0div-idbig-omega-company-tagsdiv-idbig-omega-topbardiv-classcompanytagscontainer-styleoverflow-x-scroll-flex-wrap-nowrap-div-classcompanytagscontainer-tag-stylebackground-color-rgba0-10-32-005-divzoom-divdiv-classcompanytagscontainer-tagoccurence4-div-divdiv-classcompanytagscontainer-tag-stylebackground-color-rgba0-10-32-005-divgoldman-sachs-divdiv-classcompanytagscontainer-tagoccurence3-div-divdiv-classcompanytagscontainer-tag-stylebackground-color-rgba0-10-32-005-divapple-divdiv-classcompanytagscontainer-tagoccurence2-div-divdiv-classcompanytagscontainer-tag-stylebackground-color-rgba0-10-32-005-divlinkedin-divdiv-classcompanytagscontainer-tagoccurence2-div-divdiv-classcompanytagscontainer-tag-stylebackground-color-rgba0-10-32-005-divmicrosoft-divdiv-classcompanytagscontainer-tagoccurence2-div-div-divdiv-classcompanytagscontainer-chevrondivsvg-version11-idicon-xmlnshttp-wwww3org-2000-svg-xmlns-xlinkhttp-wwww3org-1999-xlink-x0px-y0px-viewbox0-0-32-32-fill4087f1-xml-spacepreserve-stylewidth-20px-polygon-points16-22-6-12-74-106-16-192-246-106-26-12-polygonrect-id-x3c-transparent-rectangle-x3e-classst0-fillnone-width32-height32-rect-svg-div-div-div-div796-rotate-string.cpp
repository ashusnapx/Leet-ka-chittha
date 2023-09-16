class Solution
{
    public:
        bool rotateString(string s, string goal)
        {
            if (s.size() != goal.size())
                return false;

            string doubledS = s + s;
            bool ans = doubledS.find(goal) != string::npos;

            return ans;
        }
};