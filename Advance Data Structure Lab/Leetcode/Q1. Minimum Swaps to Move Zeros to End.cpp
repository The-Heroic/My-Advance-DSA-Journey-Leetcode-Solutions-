
class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int n = nums.size();
        int total_zeros = 0;
        
        for (int num : nums) {
            if (num == 0) {
                total_zeros++;
            }
        }
        
        int non_zero_zone_size = n - total_zeros;
        
        int misplaced_zeros = 0;
        for (int i = 0; i < non_zero_zone_size; i++) {
            if (nums[i] == 0) {
                misplaced_zeros++;
            }
        }
        
        return misplaced_zeros;
    }
};