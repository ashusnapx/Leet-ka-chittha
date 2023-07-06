#include <vector>

class Solution {
public:
    int minSubArrayLen(int target, std::vector<int>& nums) {
        int n = nums.size();
        int minLength = INT_MAX;
        int windowSum = 0;
        int left = 0;

        for (int right = 0; right < n; right++) {
            windowSum += nums[right];

            while (windowSum >= target) {
                minLength = std::min(minLength, right - left + 1);
                windowSum -= nums[left];
                left++;
            }
        }

        return (minLength != INT_MAX) ? minLength : 0;
    }
};
