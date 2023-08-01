class Solution
{
    public:
        vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
        {
            vector<int> temp = candies;
            sort(temp.begin(), temp.end());
            int maxi = temp[temp.size() - 1];
            vector<bool> ans(candies.size());
            for (int i = 0; i < candies.size(); i++)
            {
                ans[i] = (candies[i] + extraCandies >= maxi);
            }
            return ans;
        }
};