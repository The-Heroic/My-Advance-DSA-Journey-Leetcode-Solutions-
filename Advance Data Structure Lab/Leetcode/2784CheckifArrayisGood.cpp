#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    bool isGood(vector<int>& nums) {
        bool chk = false;
        sort(nums.begin(), nums.end());
        int maxNum = *max_element(nums.begin(), nums.end());
        int numSize = nums.size()-1;
        int i = nums.size()-2;
        int number = maxNum-1;
        if(maxNum == numSize && maxNum == nums[numSize]){
            chk = true;
            for(i; i>-1;i--){
                if(chk == true && nums[i]==number){
                    i--;
                    number--;
                    
                }
            if (nums[i]!= number){
            return false;
            }
            }
            
        }
        return true;
    }
};


class Solution1 {
public:
    bool isGood(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        int n = nums.size() - 1;
        if (n < 1) return false; 

        int maxNum = nums[n]; 
        int numSize = n;
        
        if(maxNum == numSize && nums[numSize] == maxNum && nums[numSize - 1] == maxNum){
            int number = maxNum - 1;
            for(int i = numSize - 2; i >= 0; i--){
                if(nums[i] == number){
                    number--;
                } else {
                    return false;
                }
            }
            return number == 0;
        }
        
        return false; 
    }
};


int main(){

}