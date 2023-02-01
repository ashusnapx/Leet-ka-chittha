class Solution
{
    public:
        string gcdOfStrings(string a, string b)
        {

            /*
            GCD basically has a property that if their are two strings
            then string1 + string2 == string2 + string1
            Eg - string1 + string2 == string2 + string1
                str1 = "ABCABC", str2 = "ABC"
                ABCABC + ABC == ABC + ABCABC == ABCABCABC
            */

            if (a + b == b + a)
            {
                return a.substr(0, gcd(a.length(), b.length()));
            }

            return "";
        }
};