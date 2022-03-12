class Solution {
public:
    int ms_helper(int n,int *ans)
    {
        if(n<=0)
        {
            return 0;
        }
        
        if(ans[n]!=-1)
        {
            return ans[n];
        }
        int x = INT_MAX;
        if(n%2==0)
        {
            x = ms_helper(n/2,ans);
        }
        int y = ms_helper(n-1,ans);
        
        int output = min(x,y)+1;
        ans[n] = output;
        return output;
    }
    int numberOfSteps(int num) 
    {
//         // 1. Recursion approach gives time limit exceeded error
//         // base case
//         if(num<=0)
//         {
//             return 0;
//         }
        
//         // recursive call
//         int x = INT_MAX;
//         if(num%2==0)
//         {
//             x = numberOfSteps(num/2);
//         }
//         int y = numberOfSteps(num-1);
        
//         int ans = min(x,y);
//         return ans+1;
        
        // 2. now lets try memoization approach and it gave correct answer but faster than 6.61% only
       int *ans = new int[num+1];
        for(int i=0;i<=num;i++)
        {
            ans[i] = -1;
        }
        
        return ms_helper(num,ans);
    }
};