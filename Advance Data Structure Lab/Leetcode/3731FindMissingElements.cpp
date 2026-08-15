#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> missingNums;

        sort(nums.begin(), nums.end());
        int startNum = nums[0];
        int endNum = nums[nums.size()-1];

        for(int i = 0; i<endNum+1; i++){
            if(nums[i] == startNum){
                startNum++;
                continue;
            }
            else{
                missingNums.push_back(startNum);
            }
            startNum++;
        }

        return missingNums;
    }
};


class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> missingNums;

        for (int i = 0; i < (int)nums.size() - 1; i++) {
            
            for (int val = nums[i] + 1; val < nums[i + 1]; val++) {
                missingNums.push_back(val);
            }
        }

        return missingNums;
    }
};


int main(){

}