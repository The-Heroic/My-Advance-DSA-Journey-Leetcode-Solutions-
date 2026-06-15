#include <bits\stdc++.h>
using namespace std;

class LCSSolver {
public:
    int computeLCS(string X, string Y) {
        int m = X.length();
        int n = Y.length();
        
        // Dynamically allocating a 2D array for DP table
        int** dp = new int*[m + 1];
        for (int i = 0; i <= m; i++) {
            dp[i] = new int[n + 1];
        }

        // Build the table bottom-up
        for (int i = 0; i <= m; i++) {
            for (int j = 0; j <= n; j++) {
                if (i == 0 || j == 0) {
                    dp[i][j] = 0;
                } else if (X[i - 1] == Y[j - 1]) {
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                } else {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }

        int result = dp[m][n];

        // Freeing the dynamically allocated memory
        for (int i = 0; i <= m; i++) {
            delete[] dp[i];
        }
        delete[] dp;

        return result;
    }
};

int main() {
   
}