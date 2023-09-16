class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        stack<int> odd, even;
        for(auto i: nums)
        {
            if(i % 2 == 0) even.push(i);
            else odd.push(i);
        }
        vector<int> ans;
        while(!odd.empty())
        {
            ans.push_back(even.top());
            even.pop();
            ans.push_back(odd.top());
            odd.pop();
        }
        return ans;
    }
};