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
    int maxProduct(vector<int>& nums) {
        double maxPro = nums[0];
        double prefix = 1, suffix = 1;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            // If we hit a 0, we "reset" the streak to 1
            if (prefix == 0) prefix = 1;
            if (suffix == 0) suffix = 1;

            prefix *= nums[i];          // Product from the start
            suffix *= nums[n - 1 - i];  // Product from the end

            maxPro = max(maxPro, max(prefix, suffix));
        }
        return (int)maxPro;
    }
};

// class Solution {
// public:
//     int maxProduct(vector<int>& nums) {
//         int maxPro = 0;
//         for(int i =0; i<nums.size()-1;i++){
//             if((nums[i]*nums[i+1])>maxPro){
//                 maxPro = nums[i]*nums[i+1];
//             }

//             int j=i+2;
//             while(nums[j]>0 && j<nums.size()){
//                 maxPro = maxPro*nums[j];
//                 j++;

//             }
//         }

//         return maxPro;

//     }
// };

int main(){
    vector<int> number = {-2, -3, -4};
    Solution sol;
    cout<<sol.maxProduct(number);
}