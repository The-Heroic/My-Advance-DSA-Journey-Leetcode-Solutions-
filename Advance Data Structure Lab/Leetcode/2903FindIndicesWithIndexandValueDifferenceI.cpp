#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int indexDifference, int valueDifference) {
        int n = nums.size();
        int minIndex = 0;
        int maxIndex = 0;

        for (int i = indexDifference; i < n; i++) {
            int j = i - indexDifference;

            if (nums[j] < nums[minIndex]) {
                minIndex = j;
            }
            if (nums[j] > nums[maxIndex]) {
                maxIndex = j;
            }

            if (abs(nums[i] - nums[minIndex]) >= valueDifference) {
                return {minIndex, i};
            }
            
       
            if (abs(nums[i] - nums[maxIndex]) >= valueDifference) {
                return {maxIndex, i};
            }
        }

        return {-1, -1};
    }
};

int main(){

}