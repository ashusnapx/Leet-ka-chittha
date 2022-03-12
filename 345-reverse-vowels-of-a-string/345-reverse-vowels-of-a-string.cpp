class Solution {
public:
    bool isVowel(char c)
    {
        return ((c=='a') or (c=='A') or (c=='e') or (c=='E') or (c=='i') or (c=='I') or (c=='o') or                 (c=='O') or (c=='u') or (c=='U') );
    }
    string reverseVowels(string s) 
    {
       int i = 0;
        int j = s.length()-1;
        
        while(i<j)
        {
            if(!isVowel(s[i]))
            {
                i++;
                continue;
            }
            if(!isVowel(s[j]))
            {
                j--;
                continue;
            }
            swap(s[i],s[j]);
            i++;
            j--;
        }
        return s;
    }
};