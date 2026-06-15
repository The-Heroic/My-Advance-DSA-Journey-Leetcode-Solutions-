#include <vector>

using namespace std;

class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int drop_count = 0;
        
        // Loop through every element in the array
        for (int i = 0; i < n; i++) {
            // Check if the current element is greater than the next circular element
            if (nums[i] > nums[(i + 1) % n]) {
                drop_count++;
            }
        }
        
        // If there is 0 or 1 drop, it means it's a valid sorted rotated array
        return drop_count <= 1;
    }
};