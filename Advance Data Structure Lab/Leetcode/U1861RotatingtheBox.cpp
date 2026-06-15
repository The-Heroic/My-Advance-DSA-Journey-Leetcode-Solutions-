#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& boxGrid) {
        int m = boxGrid.size();
        int n = boxGrid[0].size();

        char start = boxGrid[0][0];
        

        for(int i= 0; i<m; i++){
            for(int j=0; j<n; j++){
                char finder = boxGrid[i][j];
                if(start != finder && start == '#'  && finder == '.'){
                    swap(finder, start);
                }
                else{
                    continue;
                }
            }
        }
    return 0;
    }
};

class Solution1 {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& boxGrid) {
        int m = boxGrid.size();
        int n = boxGrid[0].size();

        // Step 1: Apply Gravity (Move stones to the right)
        for (int i = 0; i < m; i++) {
            int emptySlot = n - 1; // Start from the rightmost wall
            for (int j = n - 1; j >= 0; j--) {
                if (boxGrid[i][j] == '*') {
                    emptySlot = j - 1; // Reset empty slot after obstacle
                } 
                else if (boxGrid[i][j] == '#') {
                    // Move stone to the lowest available empty slot
                    boxGrid[i][j] = '.';
                    boxGrid[i][emptySlot] = '#';
                    emptySlot--;
                }
            }
        }

        // Step 2: Rotate the Box 90 degrees clockwise
        // New dimensions: n rows, m columns
        vector<vector<char>> rotatedBox(n, vector<char>(m));
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                rotatedBox[j][m - 1 - i] = boxGrid[i][j];
            }
        }

        return rotatedBox;
    }
};

// swap the stone and empty spaces
// bring the empty space to the top if no stationary obstacle is there
// continue if a stationary obstacle is found

int main(){

// Change double quotes to single quotes
vector<vector<char>> boxGrid2 = {{'#', '.', '#'}};

int m = boxGrid2.size();
int n = boxGrid2[0].size();

cout<< m<<" and "<< n;
}