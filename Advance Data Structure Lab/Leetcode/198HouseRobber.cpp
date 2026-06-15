#include <iostream>
#include <string>
#include <bitset>
#include <vector>
#include <algorithm>
#include <cmath>
#include <climits>
using namespace std;

class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;
        if (n == 1) return nums[0];

        int prev2 = 0;
        int prev1 = 0;

        for (int x : nums) {
            int current = max(prev1, prev2 + x);
            
            prev2 = prev1;
            prev1 = current;
        }

        return prev1;
    }
};

int main(){
    vector<int> Money = {1,2,3,1};
    Solution sol;
    cout<< sol.rob(Money);

}