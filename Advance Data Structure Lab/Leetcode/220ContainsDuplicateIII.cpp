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
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int indexDiff, int valueDiff) {
        for(int i = 0; i<nums.size();i++){
            for(int j=i+1; j<nums.size();j++){
                if(abs(i-j)<=indexDiff && abs(nums[i]-nums[j]<=valueDiff)){
                    return true;
                }
            }
        }
    }
};

int main(){

}