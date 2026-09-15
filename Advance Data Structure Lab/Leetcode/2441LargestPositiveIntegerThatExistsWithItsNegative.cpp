#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int left = 0;
        int right = nums.size() - 1;

        while (left < right) {
            int sum = nums[left] + nums[right];

            if (sum == 0) {
                return nums[right];
            } else if (sum < 0) {
                left++;
            } else {
                right--;
            }
        }

        return -1;
    }
};

int main(){

}