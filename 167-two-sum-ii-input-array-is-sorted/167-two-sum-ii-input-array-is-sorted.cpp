class Solution
{
    public:
        vector<int> twoSum(vector<int> &v, int target)
        {
           	vector<int> res;
            int l = 0;
            int r = v.size()-1;
            
            while(l<r)
            {
                int sum = v[l] + v[r];
                
                if(sum==target)
                {
                    res.push_back(l+1);
                    res.push_back(r+1);
                    break;
                }
                else if(sum < target)
                {
                    l++;
                }
                else
                {
                    r--;
                }
            }
            return res;
        }
};