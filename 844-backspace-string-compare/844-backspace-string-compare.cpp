class Solution
{
    public: 
#include <bits/stdc++.h>

        bool backspaceCompare(string s, string t)
        {
            vector<char> first;
            vector<char> second;

            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] == '#')
                {
                    if(first.size())
                    {
                        first.pop_back();
                    }  
                }
                else
                {
                    first.push_back(s[i]);
                }
            }

            for (int i = 0; i < t.size(); i++)
            {
                if (t[i] == '#')
                {
                    if(second.size())
                    {
                        second.pop_back();
                    } 
                }
                else
                {
                    second.push_back(t[i]);
                }
            }

            return first == second;
        }
};