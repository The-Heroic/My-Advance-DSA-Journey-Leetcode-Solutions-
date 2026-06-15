#include <vector>

using namespace std;

class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> result;
        result.reserve(nums.size()); // Pre-allocate memory for performance

        // Pass 1: Collect all elements strictly less than pivot
        for (int num : nums) {
            if (num < pivot) {
                result.push_back(num);
            }
        }

        // Pass 2: Collect all elements equal to pivot
        for (int num : nums) {
            if (num == pivot) {
                result.push_back(num);
            }
        }

        // Pass 3: Collect all elements strictly greater than pivot
        for (int num : nums) {
            if (num > pivot) {
                result.push_back(num);
            }
        }

        return result;
    }
};