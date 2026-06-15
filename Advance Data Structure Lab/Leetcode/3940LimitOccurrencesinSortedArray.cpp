#include <bits\stdc++.h>
using namespace std;

#include <vector>

using namespace std;

class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        vector<int> newNums;
        int i = 0;
        int j = 0;
        int count = 0;

        while (j < nums.size()) {
            if (nums[j] == nums[i]) {
                // Check against dynamic variable 'k' instead of hardcoded '2'
                if (count < k) {
                    newNums.push_back(nums[j]);
                    count++;
                }
                j++; // Always advance j to inspect the next duplicate element
            } 
            else {
                // We found a brand new distinct element
                i = j;
                count = 0; // Reset counter for the new element
                // Do not increment j here; let the next iteration process it as the new base
            }
        }

        return newNums;
    }
};


int main(){

}