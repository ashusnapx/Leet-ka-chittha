class Solution
{
    public: 
#include <bits/stdc++.h>

       bool valid(string s,int i, int j){
    while(i<j){
        if(s[i]==s[j]){
            i++;
            j--;
        }
        else
            break;
    }
    if(i>=j)
        return 1;
    return 0;
}

bool validPalindrome(string s) {
    int i=0,j=s.size()-1;
    while(i<j){
        if(s[i]==s[j]){
            i++;
            j--;
        }
        else
            break;
    }
    if(i>=j)
        return 1;
    else
        return valid(s,i+1,j) || valid(s,i,j-1);
}
};