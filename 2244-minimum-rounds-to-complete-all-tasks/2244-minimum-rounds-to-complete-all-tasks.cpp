class Solution
{
    public:
        int minimumRounds(vector<int> &tasks)
        {
           	// in one round 2 or 3 task of same level can be completed
           	//              0 1 2 3 4 5 6 7 8 9
           	//            [2,2,3,3,2,4,4,4,4,4]

           	//              in the above example, sort it
           	//              0 1 2 3 4 5 6 7 8 9
           	//              2 2 2 3 3 4 4 4 4 4

           	//              number of times 2 present = 3
           	//              number of times 3 present = 2
           	//              number of times 4 present = 5

           	//              now 2 and 3 are present only for 2 and 3 times                               which lies within the range of one round, but                               number of times 4 comes 5 times, if we break                                 down 5, we'll get 2 more rounds ie. either 2,3                               or 3,2
            int minRounds = 0;

           	// Creating unrodered pairs of task and its frequency
            unordered_map<int, int> freqmap;
            for (int i = 0; i < tasks.size(); i++)
            {
                freqmap[tasks[i]]++;
            }

           	// Checking for each frequency
            for (auto freq: freqmap)
            {
                if (freq.second == 1)
                    return -1;	// Can not handle 1 task at a time
                if (freq.second % 3 == 0)
                {
                    minRounds += freq.second / 3;	// Maximum capacity is 3, so utilising it max.
                }
                else
                {
                    minRounds += freq.second / 3 + 1;	// The last two rounds will have 2 tasks each.
                }
            }
            return minRounds;
        }
};