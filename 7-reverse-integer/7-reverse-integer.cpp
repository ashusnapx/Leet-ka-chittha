/*
Unsigned can hold a larger positive value and no negative value
*/

// Approach 1 - doesn't works for long interger values than 2^31 - 1
// class Solution
// {
//     public:
//         int reverse(int x)
//         {
//             int ans = 0;
//             while (x != 0)
//             {
//                 int digit = x % 10;
//                 ans = (ans *10) + digit;
//                 x = x / 10;
//             }

//             return ans;
//         }
// };

// Approach 2
class Solution
{
    public:
        int reverse(int x)
        {
            int ans = 0;
            while (x != 0)
            {
                int digit = x % 10;
                if ((ans > INT_MAX/10) || (ans < INT_MIN/10)) return 0;
                ans = (ans *10) + digit;
                x = x / 10;
            }

            return ans;
        }
};