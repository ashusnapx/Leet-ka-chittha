class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums) {
        stack<int> s;
        unordered_map<int, int> m;
        int n = nums.size();
        for(int i = n - 1; i >= 0; i--)
        {
            while(s.size() > 0 and s.top() <= nums[i])
            {
                s.pop();
            }

            if(s.empty()) m[nums[i]] = -1;
            else m[nums[i]] = s.top();
            s.push(nums[i]);
        }

        vector<int> ans;
        for(auto i: nums1)
        {
            ans.push_back(m[i]);
        }
        
        return ans;
    }
};