#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    int maximumJumps(vector<int>& nums, int target) {
        int n = nums.size();
        
        // Initialize DP array with -1 (meaning unreachable)
        vector<int> dp(n, -1);
        
        // Base case: Starting position
        dp[0] = 0;

        // Iterate through each stone from left to right
        for (int j = 1; j < n; j++) {
            // Check all previous stones to see if we can jump to 'j'
            for (int i = 0; i < j; i++) {
                // We can jump from i to j if:
                // 1. Stone i was reachable
                // 2. The jump distance is within the target range
                if (dp[i] != -1 && abs(nums[j] - nums[i]) <= target) {
                    dp[j] = max(dp[j], dp[i] + 1);
                }
            }
        }

        // Return the max jumps to reach the last index
        return dp[n - 1];
    }
};

int main(){
    
}