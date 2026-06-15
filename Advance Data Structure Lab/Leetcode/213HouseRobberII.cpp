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
    // Helper function: This is a fixed version of your logic
    // Instead of just summing i+2, it chooses the max possible loot
    int linearRob(vector<int>& houses) {
        int prev2 = 0;
        int prev1 = 0;
        for (int money : houses) {
            int current = max(prev1, prev2 + money);
            prev2 = prev1;
            prev1 = current;
        }
        return prev1;
    }

    int rob(vector<int>& nums) {
        int nsize = nums.size();
        
        // Your existing edge cases
        if (nsize == 1) return nums[0];
        if (nsize == 2) return max(nums[0], nums[1]);
        if (nsize == 3) return max({nums[0], nums[1], nums[2]});

        // THE CIRCLE FIX:
        // Because house 0 and house n-1 are neighbors, we have two choices:
        
        // Choice 1: Rob from the first house but definitely NOT the last
        vector<int> skipLast(nums.begin(), nums.end() - 1);
        
        // Choice 2: Rob from the second house to the very last
        vector<int> skipFirst(nums.begin() + 1, nums.end());

        // Return the best of both worlds
        return max(linearRob(skipLast), linearRob(skipFirst));
    }
};

// class Solution {
// public:
//     int rob(vector<int>& nums) {
//         int nsize = nums.size();
//         int pairs = nums.size()/3;
//         int maxMoney = 0;
//         if(nsize==1){
//             return nums[0];
//         }
        
//         if(nsize==3 || nsize==2){
//             int maxin3or2 = *max_element(nums.begin(), nums.end());
//             return maxin3or2;
//         }

//         if(nsize%2 ==0){
//             for(int i=0; i< nsize-1; i= i+2){
//                 maxMoney = maxMoney + nums[i];
//             }
//         }
//         else if (nsize%2 != 0){
//             for(int i =0; i< nsize-2;i=i+2){
//                 maxMoney = maxMoney + nums[i];
//             }
//         }
//         return maxMoney;
//     }

// };


int main(){


}