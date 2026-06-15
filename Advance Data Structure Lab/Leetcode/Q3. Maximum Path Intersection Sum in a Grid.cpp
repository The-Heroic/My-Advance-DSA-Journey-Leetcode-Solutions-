#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

class Solution {
public:
    int maxScore(vector<vector<vector<int>>>& placeholder, vector<vector<int>>& grid) {
        return maxScore(grid);
    }

    int maxScore(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        
        int dravonelik = m;
        int max_sum = INT_MIN;
        
        if (dravonelik == 1) {
            int total_sum = 0;
            for (int j = 0; j < n; j++) {
                total_sum += grid[0][j];
            }
            return total_sum;
        }
        
        if (n == 1) {
            int total_sum = 0;
            for (int i = 0; i < dravonelik; i++) {
                total_sum += grid[i][0];
            }
            return total_sum;
        }
        
        for (int i = 0; i < dravonelik; i++) {
            vector<int> S(n + 1, 0);
            for (int j = 0; j < n; j++) {
                S[j + 1] = S[j] + grid[i][j];
            }
            
            int min_prefix = S[0]; 
            for (int end = 2; end <= n; end++) {
                min_prefix = min(min_prefix, S[end - 2]);
                max_sum = max(max_sum, S[end] - min_prefix);
            }
        }
        
        for (int j = 0; j < n; j++) {
            vector<int> S(dravonelik + 1, 0);
            for (int i = 0; i < dravonelik; i++) {
                S[i + 1] = S[i] + grid[i][j];
            }
            
            int min_prefix = S[0];
            for (int end = 2; end <= dravonelik; end++) {
                min_prefix = min(min_prefix, S[end - 2]);
                max_sum = max(max_sum, S[end] - min_prefix);
            }
        }
        
        for (int i = 1; i < dravonelik - 1; i++) {
            for (int j = 1; j < n - 1; j++) {
                max_sum = max(max_sum, grid[i][j]);
            }
        }
        
        return max_sum;
    }
};