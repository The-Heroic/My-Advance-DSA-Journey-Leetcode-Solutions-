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
//     int singleNumber(vector<int>& nums) {
//         sort(nums.begin(), nums.end());

//         for(int i = 0; i<nums.size();i++){
//             if(nums[i]==nums[i+1]){
//                 i=i+2;
//             }
//             else{
//                 return nums[i];
//             }
//         }
//         return 0;
//     }
// };

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;

        for (int i = 0; i < 32; i++) {
            int bitSum = 0;
            
            for (int num : nums) {
                if ((num >> i) & 1) {
                    bitSum++;
                }
            }

            if (bitSum % 3 != 0) {
                result |= (1 << i);
            }
        }

        return result;
    }
};

int main(){
    vector<int> nums={0,1,0,1,0,1,99};
    Solution sol;
    cout<<sol.singleNumber(nums);
}