#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int, vector<int>> repeatingNums;
        for(int i = 0;i<nums.size();i++){
            repeatingNums[nums[i]].push_back(i);
        }
        int count = 0;

        for(const auto&[num, vec]: repeatingNums){
            if(vec.size()==3 && (vec[1]-vec[0]== vec[2]-vec[1])){
                count++;
            }
        }

        return count;
    }
};


int main(){

}