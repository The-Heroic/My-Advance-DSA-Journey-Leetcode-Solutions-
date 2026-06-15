#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        int max_val = *max_element(nums.begin(), nums.end());
        int min_val = *min_element(nums.begin(), nums.end());
        
        // Cast to long long to prevent integer overflow during multiplication
        return (long long)k * (max_val - min_val);
    }
};