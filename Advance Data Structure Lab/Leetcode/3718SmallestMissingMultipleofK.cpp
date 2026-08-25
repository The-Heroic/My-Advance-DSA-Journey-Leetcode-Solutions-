#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int maxE = *max_element(nums.begin(), nums.end());
        vector<int> multiples;
        unordered_map<int, bool> multiplesMap;

        int number = k;
        while (number <= maxE + k) {
            multiples.push_back(number);
            number += k;
        }

        for (int num : nums) {
            multiplesMap[num] = true;
        }

        for (int mult : multiples) {
            if (multiplesMap.find(mult) == multiplesMap.end()) {
                return mult;
            }
        }

        return -1;
    }
};

int main(){

    vector<int> nums = {8,2,3,4,6};
    int k = 2;

    Solution sol;

    int result = sol.missingMultiple(nums, k);
    cout<<result;
}