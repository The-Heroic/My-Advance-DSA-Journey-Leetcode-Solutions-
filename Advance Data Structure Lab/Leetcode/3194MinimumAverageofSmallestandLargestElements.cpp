#include <bits\stdc++.h>

using namespace std;

class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        int left = 0;
        int right = nums.size() - 1;
        double minAvg = 1e9;

        while (left < right) {
            
            double currentAvg = (nums[left] + nums[right]) / 2.0;
            
            minAvg = min(minAvg, currentAvg);
            
            left++;
            right--;
        }

        return minAvg;
    }
};

int main(){

}