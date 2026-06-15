#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    int countPartitions(vector<int>& nums) {
        // 1. Calculate the total sum of the array.
        // We use 0LL (long long) to ensure no overflow, although constraints are small.
        long long totalSum = accumulate(nums.begin(), nums.end(), 0LL);

        // 2. Apply the Parity Logic:
        // If the total sum is even, every possible partition results in an even difference.
        // If the total sum is odd, no partition can ever result in an even difference.
        if (totalSum % 2 == 0) {
            // An array of size n has n - 1 possible partition points.
            return nums.size() - 1;
        } else {
            return 0;
        }
    }
};

int main(){

}