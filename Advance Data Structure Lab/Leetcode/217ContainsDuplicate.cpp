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
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(int i =0; i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                return true;
            }
        }
    //     int temp = nums.size();
    //     int result = 0;
    //     for (int x : nums) {
    //         result ^= x;
    //     }

    //     if(result!=0){
    //         return true;
    //     }
    // return false;
    return false;
    }
};


int main(){
    vector<int> nums = {1,1,1,3,3,4,3,2,4,2};
    Solution sol;
    cout<<boolalpha<<sol.containsDuplicate(nums);
}