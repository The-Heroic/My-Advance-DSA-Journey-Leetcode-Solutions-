#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        set<int> newSum;
        int left = 0;
        int right = nums.size() - 1;

        while(left < right){
            newSum.insert(nums[left] + nums[right]);
            left++;
            right--;
        }

        return newSum.size();
    }
};


int main(){

}