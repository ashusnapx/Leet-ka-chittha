class Solution
{
    public:
        vector<vector < int>> groupThePeople(vector<int> &groupSizes)
        {
            vector<vector < int>> answer;
            int j;

            for (int i = 0; i < groupSizes.size(); i++)
            {
                if (groupSizes[i] != 0)
                {
                    j = i + 1;
                    vector<int> temp = { i
                    };
                    while ((temp.size() < groupSizes[i]) && (j != groupSizes.size()))
                    {
                        if (groupSizes[i] == groupSizes[j])
                        {
                            temp.push_back(j);
                            groupSizes[j] = 0;
                        }
                        j++;
                    }
                    answer.push_back(temp);
                }
            }
            return answer;
        }
};