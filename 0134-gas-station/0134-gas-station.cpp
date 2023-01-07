class Solution
{
    public:
        int canCompleteCircuit(vector<int> &gas, vector<int> &cost)
        {
           	// edge case - if sum of cost > sum of gas, it's never possible to come again
            int totalGas = 0, totalCost = 0;
            int m = gas.size();
            for (int i = 0; i < m; i++)
            {
                totalGas += gas[i];
                totalCost += cost[i];
            }

            if (totalCost > totalGas) return -1;

           	// now if the above condition doesn't meets, this means we have gas more than cost(ie. distance to be traversed)

            int tankMeinGas = 0, startPoint = 0;
            for (int i = 0; i < m; i++)
            {
                tankMeinGas += gas[i];
                tankMeinGas -= cost[i];

                if (tankMeinGas < 0)
                {
                    startPoint = i + 1;
                    tankMeinGas = 0;
                }
            }
            return startPoint;
        }
};