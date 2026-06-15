#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        unordered_set<int> prefixes;
        
        // 1. Generate and store all possible prefixes for numbers in arr1
        for (int val : arr1) {
            while (val > 0) {
                prefixes.insert(val);
                val /= 10; // Mathematical right-shift (e.g., 123 -> 12 -> 1)
            }
        }
        
        int max_len = 0;
        
        // 2. Query numbers from arr2 against the stored prefixes
        for (int val : arr2) {
            while (val > 0) {
                // If a matching prefix is found in our hash set
                if (prefixes.count(val)) {
                    // Calculate its length and update our maximum
                    int current_len = to_string(val).length();
                    max_len = max(max_len, current_len);
                    
                    // Since we check from largest prefix to smallest, 
                    // the first match for this number is its absolute best.
                    break; 
                }
                val /= 10; // Shrink to check smaller prefixes
            }
        }
        
        return max_len;
    }
};

int main(){

}