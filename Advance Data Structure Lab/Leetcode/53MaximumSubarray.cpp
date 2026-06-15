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
    int maxSubArray(vector<int>& nums) {
        int currSum;
        int maxSum = INT_MIN;
        for(int val: nums){
            currSum += val;
            maxSum = max(currSum, maxSum);
            if(currSum<0){
                currSum =0;
            }
        }
        
    return maxSum;
    }
};

int main(){

}