class Solution
{
    public:
        string frequencySort(string s)
        {
            map<char, int> mp;
            for (char ch: s)
            {
                mp[ch]++;	//key=char, value=int(count)
            }

            priority_queue<pair<int, char>> pq;	//MAX HEAP

            for (auto it: mp) pq.push({ it.second,
                it.first });

            string str;

            while (!pq.empty())
            {
                auto top = pq.top();
                pq.pop();

                for (int i = 0; i < top.first; i++)
                {
                    str.push_back(top.second);
                }
            }
            return str;
        }
};