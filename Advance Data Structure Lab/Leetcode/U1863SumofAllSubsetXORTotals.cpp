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
    int subsetXORSum(vector<int>& nums) {
        
        int n = nums.size();
        int XORSum=0;
        int Sum=0;
        vector<int> SumX;

        for(int i=0;i<nums.size();i++){
            for(int j=0; j<=i;j++){
                XORSum = XORSum ^ nums[j];
            }
            SumX.push_back(XORSum);
            XORSum=0;
        }

        for(int i =0; i<SumX.size();i++){
            Sum= Sum + SumX[i];
        }
        return Sum;
    }
};


int main(){

}