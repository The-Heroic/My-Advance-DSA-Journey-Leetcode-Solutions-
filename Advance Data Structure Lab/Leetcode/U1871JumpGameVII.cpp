#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    bool canReach(string s, int minJump, int maxJump) {
        int n = s.length();
        
        // If the destination index itself is a wall, it is unreachable
        if (s[n - 1] == '1') return false;

        // dp[i] stores whether index i can be reached from index 0
        vector<bool> dp(n, false);
        dp[0] = true; // Base Case: We always start at index 0

        int reachable_in_window = 0;

        for (int i = 1; i < n; i++) {
            // 1. Add the newly valid index to our window
            if (i >= minJump) {
                if (dp[i - minJump]) {
                    reachable_in_window++;
                }
            }

            // 2. Remove the index that just fell out of the window bounds
            if (i > maxJump) {
                if (dp[i - maxJump - 1]) {
                    reachable_in_window--;
                }
            }

            // 3. If there is at least one reachable index in our current window 
            //    and the current tile is '0', then this tile is reachable.
            if (s[i] == '0' && reachable_in_window > 0) {
                dp[i] = true;
            }
        }

        // Return whether the last index of the string was reached
        return dp[n - 1];
    }
};

int main(){

}