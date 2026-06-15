#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ranges;
        
        // Safety Tweak: Handle empty vector to prevent underflow/segmentation faults
        if (nums.empty()) return ranges;

        int a = 0;     // Marks the start index of the current range
        int b = a + 1; // Tracks ahead to find consecutive elements

        // We run the loop up to nums.size() so the final range gets captured 
        // when b hits the end of the array.
        while (b <= nums.size()) {
            
            // Tweak 1: Added bounds check (b < nums.size())
            // Tweak 2: Used (long long) cast to prevent integer overflow errors (e.g., INT_MAX + 1)
            if (b < nums.size() && nums[b] == (long long)nums[b-1] + 1) {
                b++; // Consecutive streak continues, keep moving forward
            } 
            else {
                // The streak broke or we reached the end of the array!
                
                // Tweak 3: Check if it's a single element or a full range
                if (a == b - 1) {
                    // Single element: push the value at index a
                    ranges.push_back(to_string(nums[a]));
                } else {
                    // Range found: push from value nums[a] to value nums[b-1]
                    ranges.push_back(to_string(nums[a]) + "->" + to_string(nums[b-1]));
                }
                
                // Tweak 4: Reset 'a' to the next starting element, and place 'b' right ahead of it
                a = b;
                b = a + 1;
            }
        }
        
        return ranges;    
    }
};

int main(){

}