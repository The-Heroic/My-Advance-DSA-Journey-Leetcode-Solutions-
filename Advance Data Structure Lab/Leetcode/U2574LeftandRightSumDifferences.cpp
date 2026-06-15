#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> answer(n);
        
        // Step 1: Compute the total sum of the array
        int totalSum = 0;
        for (int num : nums) {
            totalSum += num;
        }
        
        int leftSum = 0;
        
        // Step 2: Single pass to calculate differences
        for (int i = 0; i < n; i++) {
            // rightSum is everything remaining except the current element
            int rightSum = totalSum - nums[i]; 
            
            // Calculate absolute difference
            answer[i] = abs(leftSum - rightSum);
            
            // Update leftSum and totalSum for the next iteration
            leftSum += nums[i];
            totalSum -= nums[i];
        }
        
        return answer;
    }
};
int main(){

}