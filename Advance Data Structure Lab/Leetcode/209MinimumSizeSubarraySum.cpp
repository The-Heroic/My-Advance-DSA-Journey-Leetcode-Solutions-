#include <iostream>
#include <string>
#include <bitset>
#include <vector>
#include <algorithm>
#include <cmath>
#include <climits>
using namespace std;



// class Solution {
// public:
//     int minSubArrayLen(int target, vector<int>& nums) {
    
//     }
// };

#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int minLength = INT_MAX; // Start with the largest possible value
        int sum = 0;
        int left = 0;

        for (int right = 0; right < n; right++) {
            // 1. Add the current number to our running sum
            sum += nums[right];

            // 2. While the sum is big enough, try to make the window smaller
            while (sum >= target) {
                // Update minLength if the current window is smaller
                minLength = min(minLength, right - left + 1);
                
                // Shrink from the left to find an even smaller subarray
                sum -= nums[left];
                left++;
            }
        }

        // If minLength was never updated, it means no subarray was found
        return (minLength == INT_MAX) ? 0 : minLength;
    }
};

int main(){

}