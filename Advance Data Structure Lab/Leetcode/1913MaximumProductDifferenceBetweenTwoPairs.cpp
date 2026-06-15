#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int minProduct = nums[0]*nums[1];
        int maxProduct = nums[n-1]*nums[n-2];

        int productDiff = abs(maxProduct - minProduct);
        return productDiff;
    }
};

int main(){

}