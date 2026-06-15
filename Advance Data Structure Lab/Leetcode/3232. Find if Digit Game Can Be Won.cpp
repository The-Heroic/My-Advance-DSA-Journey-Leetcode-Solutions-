#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int singleDigitSum = 0;
        int doubleDigitSum = 0;

        for(int i =0; i< nums.size(); i++){
            if(nums[i]<=9){
                singleDigitSum += nums[i];
            }

            else{
                doubleDigitSum += nums[i];
            }
            
        }

        if(singleDigitSum == doubleDigitSum){
            return false;
        }
        else{
            return true;
        }
    }
};

int main(){

}