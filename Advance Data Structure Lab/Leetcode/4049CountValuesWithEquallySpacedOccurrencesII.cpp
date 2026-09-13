#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int, vector<int>> repeatingNums;

        for(int i =0; i<nums.size(); i++){
            repeatingNums[nums[i]].push_back(i);
        }

        int count =0;

        for(const auto&[num, vec]: repeatingNums){
            if(vec.size()<3){
                continue;
            }

            int diff = vec[1]- vec[0];
            bool equalSpace = true;

            for(int j=2; j<(int)vec.size(); j++){
                if(vec[j]-vec[j-1]!= diff){
                    equalSpace = false;
                    break;
                }
            }

            if(equalSpace){
                count++;
            }
        }
    return count;
    }
    
};

int main(){

}