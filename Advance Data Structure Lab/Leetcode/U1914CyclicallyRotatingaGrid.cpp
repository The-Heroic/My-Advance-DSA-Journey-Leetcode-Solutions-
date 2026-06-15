#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> rotateGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();
        int numLayers = min(m, n) / 2;

        for (int layer = 0; layer < numLayers; ++layer) {
            // Define boundaries for the current layer
            int top = layer, left = layer;
            int bottom = m - 1 - layer, right = n - 1 - layer;

            // 1. Extract the layer elements in CCW order
            vector<int> elements;
            for (int j = left; j <= right; ++j) elements.push_back(grid[top][j]);
            for (int i = top + 1; i <= bottom; ++i) elements.push_back(grid[i][right]);
            for (int j = right - 1; j >= left; --j) elements.push_back(grid[bottom][j]);
            for (int i = bottom - 1; i >= top + 1; --i) elements.push_back(grid[i][left]);

            // 2. Calculate effective rotation using modulo
            int size = elements.size();
            int shift = k % size;

            // 3. Put elements back into the grid shifted by 'shift'
            int idx = shift; // The element at 'shift' moves to the start of the CCW path
            
            auto getNextVal = [&]() {
                int val = elements[idx];
                idx = (idx + 1) % size;
                return val;
            };

            for (int j = left; j <= right; ++j) grid[top][j] = getNextVal();
            for (int i = top + 1; i <= bottom; ++i) grid[i][right] = getNextVal();
            for (int j = right - 1; j >= left; --j) grid[bottom][j] = getNextVal();
            for (int i = bottom - 1; i >= top + 1; --i) grid[i][left] = getNextVal();
        }

        return grid;
    }
};

int main(){
    
}