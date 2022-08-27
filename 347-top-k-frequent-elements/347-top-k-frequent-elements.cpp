class Solution
{
    public:
        vector<int> topKFrequent(vector<int> &nums, int k)
        {
           	//step1 - create a frequency map
            unordered_map<int, int> mp;
            for (int i = 0; i < nums.size(); i++)
            {
                mp[nums[i]]++;
            }

           	//step2 - create a min heap
            priority_queue<pair<int, int>, vector< pair<int, int>>, greater<pair<int, int>>> mh;

            for (auto i = mp.begin(); i != mp.end(); i++)
            {
                mh.push({ i->second,
                    i->first });

                if (mh.size() > k)
                {
                    mh.pop();
                }
            }
            vector<int> ans;
            while (mh.size() != 0)
            {
                ans.push_back(mh.top().second);
                mh.pop();
            }

            return ans;
        }
};