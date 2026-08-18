#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        unordered_map<int, int> numCount;
        int n = nums.size();

        for (int i = 0; i <= n - k; i++) {
            unordered_set<int> uniqueNums;

            for (int j = i; j < i + k; j++) {
                uniqueNums.insert(nums[j]);
            }

            for (int num : uniqueNums) {
                numCount[num]++;
            }
        }

        int maxVal = -1;
        for (auto& [num, count] : numCount) {
            if (count == 1) {
                maxVal = max(maxVal, num);
            }
        }

        return maxVal;
    }
};

int main(){

}