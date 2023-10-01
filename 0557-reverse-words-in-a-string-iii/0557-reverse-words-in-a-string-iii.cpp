class Solution {
public:
    string reverseWords(string s) {
        istringstream iss(s);
        string word, result;
        
        while (iss >> word) {
            reverse(word.begin(), word.end());
            result += word + " ";
        }
        
        // Remove the trailing space
        if (!result.empty()) {
            result.pop_back();
        }
        
        return result;
    }
};
