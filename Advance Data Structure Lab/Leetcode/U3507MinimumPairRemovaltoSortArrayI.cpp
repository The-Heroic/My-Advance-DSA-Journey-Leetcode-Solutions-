#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    // Helper function to check if the array is non-decreasing
    bool isNonDecreasing(const vector<int>& nums) {
        for (int i = 0; i < (int)nums.size() - 1; i++) {
            if (nums[i] > nums[i + 1]) {
                return false;
            }
        }
        return true;
    }

    int minimumPairRemoval(vector<int>& nums) {
        int operations = 0;

        // Continue performing operations until the array is sorted
        while (nums.size() > 1 && !isNonDecreasing(nums)) {
            int minIdx = 0;
            // Use long long for sum to safely handle potential overflows, 
            // though int is sufficient given the constraints (-1000 to 1000).
            int minSum = nums[0] + nums[1];

            // Step 1: Find the adjacent pair with the minimum sum
            for (int i = 1; i < (int)nums.size() - 1; i++) {
                int currentSum = nums[i] + nums[i + 1];
                
                // If we find a strictly smaller sum, update minIdx.
                // By using '<', we naturally pick the leftmost pair in case of a tie.
                if (currentSum < minSum) {
                    minSum = currentSum;
                    minIdx = i;
                }
            }

            // Step 2: Replace the pair with their sum
            nums[minIdx] = minSum;
            nums.erase(nums.begin() + minIdx + 1);

            // Step 3: Increment operations count
            operations++;
        }

        return operations;
    }
};

int main(){

}