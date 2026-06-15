#include <bits\stdc++.h>
using namespace std;


class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int start = 0;
        int n = nums.size();
        int end = n-1;
        int maxElem = *max_element(nums.begin(), nums.end());
        int minElem = *min_element(nums.begin(), nums.end());
        int minSum = INT_MAX;


        while(start != end ){
            for(int i = start; i< end; i++){
                if((maxElem - minElem)< minSum){
                    minSum = maxElem - minElem;
                }
                else{
                    start++;
                }
            }
        }
        return minSum;

    }
};

#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int n = nums.size();
        
        // Step 1: If we only need to pick 1 student, the difference is always 0
        if (k == 1) return 0;

        // Step 2: Sort the array to bring similar scores together
        sort(nums.begin(), nums.end());

        int minDiff = INT_MAX;

        // Step 3: Slide a window of size k across the sorted array
        // The window starts at 'i' and ends at 'i + k - 1'
        for (int i = 0; i <= n - k; i++) {
            int currentDiff = nums[i + k - 1] - nums[i];
            
            // Step 4: Update minDiff if we find a smaller gap
            if (currentDiff < minDiff) {
                minDiff = currentDiff;
            }
        }

        return minDiff;
    }
};


int main(){

}