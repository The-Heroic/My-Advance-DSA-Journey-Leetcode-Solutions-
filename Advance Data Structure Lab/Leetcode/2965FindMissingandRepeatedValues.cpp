#include <iostream>
#include <string>
#include <bitset>
#include <vector>
#include <algorithm>
#include <cmath>
#include <climits>
#include <unordered_map>
using namespace std;

class Solution1 {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        int totalElements = n * n;
        
        // Create a frequency array of size n^2 + 1, initialized to 0
        // We use totalElements + 1 so we can use 1-based indexing
        vector<int> freq(totalElements + 1, 0);

        // Step 1: Fill the frequency array (Single Pass)
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                freq[grid[i][j]]++;
            }
        }

        int a = -1, b = -1;

        // Step 2: Check the frequency array for 0 and 2
        for (int i = 1; i <= totalElements; i++) {
            if (freq[i] == 2) a = i;      // Appears twice
            else if (freq[i] == 0) b = i; // Missing
            
            // Optimization: If we found both, we can stop early
            if (a != -1 && b != -1) break;
        }

        return {a, b};
    }
};

class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        int limit = n * n; // The range is [1, n^2]
        
        // 1. Copy all elements of a grid into an array (Flattening)
        vector<int> flatArray;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                flatArray.push_back(grid[i][j]);
            }
        }

        // 2. Sort the array
        sort(flatArray.begin(), flatArray.end());

        // 4. unordered_map for tracking the count of numbers
        unordered_map<int, int> counts;
        for (int num : flatArray) {
            counts[num]++;
        }

        int repeated = -1;
        int missing = -1;

        // 3. Run a loop to compare the elements (Checking the range 1 to n^2)
        for (int i = 1; i <= limit; i++) {
            // 5. If count is greater than 1, it's the repeated number (a)
            if (counts[i] == 2) {
                repeated = i;
            }
            // 6. If a number is missing (count is 0), assign to missingNumber (b)
            else if (counts.find(i) == counts.end() || counts[i] == 0) {
                missing = i;
            }
        }

        // 7. Return the two numbers in the form of a vector [a, b]
        return {repeated, missing};
    }
};
int main(){
    vector<vector<int>> grid = {{1,3},{2,2}};

}