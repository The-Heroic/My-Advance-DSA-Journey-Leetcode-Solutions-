#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
private:
    // memo[index][prev2 + 1][prev + 1][is_less][is_started]
    // Each state stores a pair: {total_valid_combinations, sum_of_waviness}
    pair<long long, long long> memo[20][14][14][2][2];

    pair<long long, long long> dp(int idx, int prev2, int prev, bool is_less, bool is_started, const string& s) {
        // Base Case: If we have successfully placed all digits
        if (idx == s.size()) {
            return {is_started ? 1 : 0, 0};
        }

        // Return memoized result if this subproblem was already solved
        if (memo[idx][prev2 + 1][prev + 1][is_less][is_started].first != -1) {
            return memo[idx][prev2 + 1][prev + 1][is_less][is_started];
        }

        long long total_ways = 0;
        long long total_waviness = 0;

        // Bounded constraint limit for the current position
        int limit = is_less ? 9 : (s[idx] - '0');

        for (int d = 0; d <= limit; d++) {
            bool next_is_less = is_less || (d < limit);
            bool next_is_started = is_started || (d > 0);

            int next_prev2 = -1;
            int next_prev = -1;
            int delta = 0;

            if (!next_is_started) {
                // Still processing leading zeros
                next_prev2 = -1;
                next_prev = -1;
                delta = 0;
            } else {
                if (!is_started) {
                    // Placing the first actual digit of the number
                    next_prev2 = -1;
                    next_prev = d;
                    delta = 0;
                } else {
                    // Sequence is active. Check if 'prev' forms a peak or valley
                    if (prev2 != -1) {
                        if ((prev > prev2 && prev > d) || (prev < prev2 && prev < d)) {
                            delta = 1; 
                        }
                    }
                    next_prev2 = prev;
                    next_prev = d;
                }
            }

            // Move to the next digit position recursively
            auto sub = dp(idx + 1, next_prev2, next_prev, next_is_less, next_is_started, s);
            
            total_ways += sub.first;
            // The waviness 'delta' is added to every valid complete number formed by this suffix path
            total_waviness += sub.second + (delta * sub.first);
        }

        return memo[idx][prev2 + 1][prev + 1][is_less][is_started] = {total_ways, total_waviness};
    }

    long long countWavinessUpTo(long long X) {
        if (X < 0) return 0;
        string s = to_string(X);

        // Reset memoization table configurations
        for (int i = 0; i < 20; i++) {
            for (int j = 0; j < 14; j++) {
                for (int k = 0; k < 14; k++) {
                    for (int l = 0; l < 2; l++) {
                        for (int m = 0; m < 2; m++) {
                            memo[i][j][k][l][m] = {-1, -1};
                        }
                    }
                }
            }
        }

        return dp(0, -1, -1, false, false, s).second;
    }

public:
    // Using long long parameters to comfortably handle constraints up to 10^15
    long long totalWaviness(long long num1, long long num2) {
        return countWavinessUpTo(num2) - countWavinessUpTo(num1 - 1);
    }
};