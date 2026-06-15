#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> countOppositeParity(vector<int>& nums) {
        vector<int> parityCount;
        for(int i =0; i<nums.size(); i++){
            int count =0;
            if(nums[i]%2==0){
                for(int j = i; j< nums.size();j++ ){
                    if(nums[j]%2 != 0){
                        count++;
                    }
                }
            }
            else{
                for(int j = i; j< nums.size();j++ ){
                    if(nums[j]%2 == 0){
                        count++;
                    }
                }
            }
            parityCount.push_back(count);

        }
    return parityCount;
    }
};

int main(){

}