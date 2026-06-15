#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int n = strs.size();
        int m = strs[0].size();
        int deleteCount = 0;

        // Iterate through each column
        for (int j = 0; j < m; j++) {
            // Check if this column is sorted
            for (int i = 0; i < n - 1; i++) {
                // If the current character is greater than the next, it's unsorted
                if (strs[i][j] > strs[i + 1][j]) {
                    deleteCount++;
                    break; // Move to the next column
                }
            }
        }

        return deleteCount;
    }
};


int main(){

}