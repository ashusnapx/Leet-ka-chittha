//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    long maximumSumSubarray(int k, vector<int> &arr, int N) {
    long sum = 0, mx = 0;
    int i = 0, j = 0; // they'll denote window size
    while (j < N) {
        // ya toh window size hit hoga
        if (j - i + 1 == k) {
            sum += arr[j]; // Add the element at index 'j' to the sum
            mx = max(mx, sum); // Update the maximum sum
            sum -= arr[i]; // Remove the element at index 'i' from the sum
            i++;
            j++;
        } else {
            sum += arr[j]; // Add the element at index 'j' to the sum
            j++;
        }
    }

    return mx;
}

};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends