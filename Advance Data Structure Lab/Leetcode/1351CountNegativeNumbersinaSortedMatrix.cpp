#include <bits\stdc++.h>
using namespace std;


class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        
        int row = m - 1; // Start at the last row
        int col = 0;     // Start at the first column
        int count = 0;
        
        while (row >= 0 && col < n) {
            if (grid[row][col] < 0) {
                // If this is negative, everything to its right is negative
                count += (n - col);
                // Move up to the next row
                row--;
            } else {
                // If this is non-negative, move right to find a negative
                col++;
            }
        }
        
        return count;
    }
};

int main(){
    
}