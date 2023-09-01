class Solution
{
    public:
        int countSetBits(int n)
        {
            int count = 0;
            while (n > 0)
            {
                count += n &1;	// Check the last bit
                n >>= 1;	// Shift right by 1
            }
            return count;
        }

    vector<int> countBits(int n)
    {
        vector<int> ans;
        for (int i = 0; i <= n; i++)
        {
            ans.push_back(countSetBits(i));
        }
        return ans;
    }
};

/*
1st try brute:
int sumOfDigits(int n)
        {
            int m = 0, sum = 0;
            while (n > 0)
            {
                m = n % 10;	// last digit
                sum += m;
                n /= 10;
            }
            return sum;
        }

    string decimalToBinaryEfficient(int n)
    {
        if (n == 0) return "0";

        string binary;
        while (n > 0)
        {
            binary = (n % 2 == 0 ? "0" : "1") + binary;
            n >>= 1;
        }
        return binary;
    }
    vector<int> countBits(int n)
    {
        vector<int> ans;
        for (int i = 0; i <= n; i++)
        {
            std::string value = decimalToBinaryEfficient(i);
            int sum = sumOfDigits(stoi(value));
            ans.push_back(sum);
        }
        return ans;
    }
*/