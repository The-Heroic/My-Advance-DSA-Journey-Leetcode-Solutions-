#include <bits\stdc++.h>
using namespace std;

class Solution {
private:
    bool isValid(const vector<int>& nums, int start, int end) {
        int prev = -1;
        
        for (int i = 0; i < nums.size(); i++) {
            if (i >= start && i <= end) {
                continue;
            }
            if (prev != -1 && nums[i] <= prev) {
                return false;
            }
            
            prev = nums[i];
        }
        
        return true;
    }

public:
    int incremovableSubarrayCount(vector<int>& nums) {
        int n = nums.size();
        int count = 0;

        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                if (isValid(nums, i, j)) {
                    count++;
                }
            }
        }

        return count;
    }
};


int main(){

}