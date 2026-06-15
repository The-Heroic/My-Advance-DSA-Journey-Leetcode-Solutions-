#include <bits\stdc++.h>
using namespace std;


class Solution {
public:
    // Helper function made public
    int calculateMaxJumps(int i, const vector<int>& arr, int d, vector<int>& dp) {
        // If we have already calculated the max jumps from index i, return it instantly
        if (dp[i] != 0) {
            return dp[i];
        }
        
        int n = arr.size();
        int max_indices_visited = 1; // Base case: You always visit the index you are currently standing on
        
        // 1. Explore valid jumps to the RIGHT (up to distance d)
        for (int j = i + 1; j <= i + d && j < n; j++) {
            if (arr[j] >= arr[i]) {
                break; // Hit a wall that is equal or taller; block all further right jumps
            }
            // If valid, transitively find the max indices we can visit from position j
            max_indices_visited = max(max_indices_visited, 1 + calculateMaxJumps(j, arr, d, dp));
        }
        
        // 2. Explore valid jumps to the LEFT (up to distance d)
        for (int j = i - 1; j >= i - d && j >= 0; j--) {
            if (arr[j] >= arr[i]) {
                break; // Hit a wall that is equal or taller; block all further left jumps
            }
            max_indices_visited = max(max_indices_visited, 1 + calculateMaxJumps(j, arr, d, dp));
        }
        
        // Cache the result in our DP array before returning
        return dp[i] = max_indices_visited;
    }

    // Main execution function
    int maxJumps(vector<int>& arr, int d) {
        int n = arr.size();
        // dp[i] will store the maximum number of indices visitable starting from index i
        vector<int> dp(n, 0);
        int global_max = 0;
        
        // Try starting from every possible index in the array to find the ultimate maximum
        for (int i = 0; i < n; i++) {
            global_max = max(global_max, calculateMaxJumps(i, arr, d, dp));
        }
        
        return global_max;
    }
};

int main(){

}