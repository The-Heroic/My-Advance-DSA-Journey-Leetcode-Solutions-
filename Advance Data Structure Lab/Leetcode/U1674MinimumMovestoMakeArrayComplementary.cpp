#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    int minMoves(vector<int>& nums, int limit) {
        int n = nums.size();
        // Difference array to store move adjustments for each possible sum T
        // Max sum is 2 * limit, so we need size 2 * limit + 2
        vector<int> diff(2 * limit + 2, 0);

        for (int i = 0; i < n / 2; ++i) {
            int a = nums[i];
            int b = nums[n - 1 - i];

            // 1. Every pair starts by needing 2 moves for any target sum T
            // Range: [2, 2 * limit]
            diff[2] += 2;
            diff[2 * limit + 1] -= 2;

            // 2. Only 1 move is needed if T is in [min(a,b)+1, max(a,b)+limit]
            // We subtract 1 move from the baseline of 2 in this range
            int min_val = min(a, b);
            int max_val = max(a, b);
            
            diff[min_val + 1] -= 1;
            diff[max_val + limit + 1] += 1;

            // 3. Exactly 0 moves are needed if T is exactly a + b
            // We subtract another 1 move from the baseline for this specific point
            diff[a + b] -= 1;
            diff[a + b + 1] += 1;
        }

        int min_moves = n; // Max possible moves is n
        int current_moves = 0;
        
        // Calculate prefix sum to find the minimum total moves
        for (int i = 2; i <= 2 * limit; ++i) {
            current_moves += diff[i];
            min_moves = min(min_moves, current_moves);
        }

        return min_moves;
    }
};

int main(){

}