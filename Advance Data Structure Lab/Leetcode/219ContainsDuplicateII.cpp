#include <iostream>
#include <string>
#include <bitset>
#include <vector>
#include <algorithm>
#include <cmath>
#include <climits>
using namespace std;

#include <unordered_map>
#include <vector>

#include <unordered_set>
#include <vector>

class Solution1 {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        // This set will only ever hold a maximum of k elements
        std::unordered_set<int> window;

        for (int i = 0; i < nums.size(); i++) {
            // 1. Check if the current number is already in our k-sized window
            if (window.count(nums[i])) {
                return true;
            }

            // 2. Add the current number to the window
            window.insert(nums[i]);

            // 3. If the window grows larger than k, remove the oldest element
            // The element at 'i - k' is exactly k+1 steps behind the next element
            if (window.size() > k) {
                window.erase(nums[i - k]);
            }
        }

        return false;
    }
};

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        // value -> last seen index
        unordered_map<int, int> lastSeen;

        for (int i = 0; i < nums.size(); i++) {
            // 1. Have we seen this number before?
            if (lastSeen.count(nums[i])) {
                // 2. Is the distance small enough?
                if (i - lastSeen[nums[i]] <= k) {
                    return true;
                }
            }
            // 3. Update the map with the latest position
            lastSeen[nums[i]] = i;
        }

        return false;
    }
};

// class Solution {
// public:
//     bool containsNearbyDuplicate(vector<int>& nums, int k) {
//         int right = 0;
//         int n = nums.size();

//         for(int left = 0; left<n;left++){

//             int right = left + 1;

//             while(right<n && (right-left)<=k){

//                 if (nums[right] == nums[left]) {
//                     return true;
//                 }
//                 right++;
//             }

//             right =left+1;
//         }
//     return false;
//     }
// };

int main(){

}