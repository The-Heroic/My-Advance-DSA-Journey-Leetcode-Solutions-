#include <iostream>
#include <string>
#include <bitset>
#include <vector>
#include <algorithm>
#include <cmath>
#include <climits>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        // [-1,0,1,2,-1,-4]

        vector<vector<int>> triplet;

        sort(nums.begin(), nums.end());
        int n = nums.size();

        int left = 0;
        int right = n;
        
        for(int i = 0; left<right ; i++){
            left = i+1;
            right = n-1;
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            if(nums[i]+ nums[left]+ nums[right]==0){
                triplet.push_back({i,left, right});
            }
        
            left = i+1;
            right = n-1;
        
        }
        
    }
};

int main(){

}