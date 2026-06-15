#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <climits>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int key = 0;
        while(key<nums.size()){
            int count =0;
            for(int i =0;i<nums.size();i++){
                if((nums[i]==nums[key])&& (i!=key)){
                    count++;
                    break;
                    
                    
                }

            }
            if (count == 0) return nums[key];
            key++;
        }
    }
};


int main(){
    vector<int> nums = {1};
    Solution sol;
    cout<<sol.singleNumber(nums);
}