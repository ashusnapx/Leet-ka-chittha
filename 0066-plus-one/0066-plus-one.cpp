class Solution {
public:
    vector<int> plusOne(vector<int> &digits) {
        int n = digits.size();
        
        // Start from the least significant digit
        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                // If the current digit is less than 9, we can simply increment it and return
                digits[i]++;
                return digits;
            } else {
                // If the current digit is 9, set it to 0 and continue with the next digit
                digits[i] = 0;
            }
        }
        
        // If we reach here, it means we need to add an additional digit (carry-over)
        vector<int> result(n + 1, 0);
        result[0] = 1; // Set the most significant digit to 1
        
        return result;
    }
};
