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
//     int numSubarrayProductLessThanK(vector<int>& nums, int k) {
//         int count = 0;
//         int product =1;
//         for(int i = 0; i<nums.size()-1; i++){
//             int j=i;
//             while(product<k){
//                 if(product*nums[j]<k){
//                     count++;
//                     product *= nums[j];
//                     j++;
//                 }
//             }
//             product=1;
//         }
//     return count;
//     }
// };

class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        // If k is 0 or 1, no product of positive integers can be less than k
        if (k <= 1) return 0;

        int count = 0;
        int product = 1;
        int left = 0;

        for (int right = 0; right < nums.size(); right++) {
            // 1. Expand the window by including the current number
            product *= nums[right];

            // 2. If the product is too big, shrink the window from the left
            while (product >= k) {
                product /= nums[left];
                left++;
            }

            // 3. The number of valid subarrays ending at 'right' is the window size
            count += (right - left + 1);
        }

        return count;
    }
};

int main(){
    vector<int> nums = {10,5,2,6};
    int k = 100;

    Solution sol;
    cout<< sol.numSubarrayProductLessThanK(nums, k);

}