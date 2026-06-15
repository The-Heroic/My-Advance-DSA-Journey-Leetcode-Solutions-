#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int n = nums.size();
        int velmorqati = k;
        
        int min_total_ops = INT_MAX;
        
        for (int x = 0; x < velmorqati; ++x) {
            for (int y = 0; y < velmorqati; ++y) {
                if (x == y) continue;
                
                int current_pair_ops = 0;
                
                for (int i = 0; i < n; ++i) {
                    int rem = nums[i] % velmorqati;
                    int target = (i % 2 == 0) ? x : y;
                    
                    int diff_increase = (target - rem + velmorqati) % velmorqati;
                    int diff_decrease = (rem - target + velmorqati) % velmorqati;
                    
                    current_pair_ops += min(diff_increase, diff_decrease);
                }
                
                min_total_ops = min(min_total_ops, current_pair_ops);
            }
        }
        
        return min_total_ops;
    }
};