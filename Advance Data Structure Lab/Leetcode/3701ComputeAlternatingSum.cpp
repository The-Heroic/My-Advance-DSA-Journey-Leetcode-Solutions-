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
    int alternatingSum(vector<int>& nums) {
        int sum =0;
        for(int i =0; i<nums.size();i++){
            if(i%2==0){
                sum += nums[i];
            }
            else{
                sum -= nums[i];
            }
        }
    return sum;
    }
};


int main(){

}