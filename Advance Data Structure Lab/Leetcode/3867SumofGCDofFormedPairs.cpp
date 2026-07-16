#include <bits\stdc++.h>
using namespace std;


class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        vector<int> gcdValues;
        int maxVal = 0;

        for(int i = 0; i < nums.size(); i++){
            maxVal = max(maxVal, nums[i]);
            gcdValues.push_back(gcd(nums[i], maxVal));
        }

        sort(gcdValues.begin(), gcdValues.end());

        long long finalSum = 0;
        int left = 0;
        int right = gcdValues.size() - 1;

        while(left < right){
            finalSum = finalSum + gcd(gcdValues[left], gcdValues[right]);
            left++;
            right--;
        }

        return finalSum;
    }
};

int main(){
    
}