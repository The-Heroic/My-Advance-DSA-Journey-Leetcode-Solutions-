#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int sum = nums[0];
        int n = nums.size();

        for (int i = 1; i < n; i++) {
            if (nums[i] == nums[i - 1] + 1) {
                sum += nums[i];
            } else {
                break;
            }
        }

        unordered_set<int> seen(nums.begin(), nums.end());

        while (seen.count(sum)) {
            sum++;
        }

        return sum;
    }
};

int main(){

}