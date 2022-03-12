class Solution {
public:
    int tribonacci_helper(int n, int *ans)
{
    if(n == 0)
    {
        return 0;
    }
    else if(n==1 || n==2 )
    {
        return 1;
    }

    else if(ans[n]!=-1)
    {
        return ans[n];
    }
    else
    {
        int a = tribonacci_helper(n - 1, ans);
        int b = tribonacci_helper(n - 2, ans);
        int c = tribonacci_helper(n - 3, ans);

        int output = a + b + c;
        ans[n] = output;
    }
    return ans[n];
}

int tribonacci(int n)
{
    int *ans = new int[n + 1];
    for(int i = 0; i <= n; i++)
    {
        ans[i] = -1;
    }
    return tribonacci_helper(n, ans);
}

};