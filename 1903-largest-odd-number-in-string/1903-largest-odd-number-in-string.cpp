class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.size();
        while (n > 0 && (num[n-1] - '0') % 2 == 0) {
            num.pop_back();
            n--;
        }
        return num;
    }
};
