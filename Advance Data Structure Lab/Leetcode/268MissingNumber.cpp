#include <bits\stdc++.h>
using namespace std;


class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        for(int i =0;i<nums.size();i++){
            if(i != nums[i]){
            return i;
            }
            
        }
        for(int j=0;j<nums.size();j++){
            if( j != nums.size()){
                return nums.size();
            }
        }
    return -1;
    }
};


class Solution1 {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int expectedSum = n * (n + 1) / 2;
        int actualSum = accumulate(nums.begin(), nums.end(), 0);
        return expectedSum - actualSum;
    }
};

int main(){

}