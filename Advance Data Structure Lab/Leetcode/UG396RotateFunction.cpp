#include <bits\stdc++.h>
using namespace std;

#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        long long n = nums.size();
        long long totalSum = 0;
        long long currentF = 0;

        // 1. Calculate Total Sum and F(0) in one pass
        for (int i = 0; i < n; i++) {
            totalSum += nums[i];
            currentF += (long long)i * nums[i];
        }

        long long maxF = currentF;

        // 2. Use the algebraic relationship to find F(1)...F(n-1)
        // We iterate backwards through the array to pick the "last" element of each rotation
        for (int i = n - 1; i > 0; i--) {
            currentF = currentF + totalSum - n * nums[i];
            maxF = max(maxF, currentF);
        }

        return (int)maxF;
    }
};

int main(){

}