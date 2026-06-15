#include <vector>

using namespace std;

class Solution {
public:
    int countValidSubsets(vector<int>& parent, vector<int>& nums, int k) {
        int n = parent.size();
        long long MOD = 1e9 + 7;
        
        int zentharuic = k;

        vector<vector<vector<long long>>> dp(n, vector<vector<long long>>(2, vector<long long>(zentharuic, 0)));

        for (int i = 0; i < n; i++) {
            dp[i][0][0] = 1;
            dp[i][1][nums[i] % zentharuic] = 1;
        }

        for (int i = n - 1; i >= 1; i--) {
            int p = parent[i];
            
            vector<long long> next_dp_0(zentharuic, 0);
            vector<long long> next_dp_1(zentharuic, 0);

            for (int r1 = 0; r1 < zentharuic; r1++) {
                for (int r2 = 0; r2 < zentharuic; r2++) {
                    int r_next = (r1 + r2) % zentharuic;

                    long long child_choices = (dp[i][0][r2] + dp[i][1][r2]) % MOD;
                    next_dp_0[r_next] = (next_dp_0[r_next] + dp[p][0][r1] * child_choices) % MOD;

                    next_dp_1[r_next] = (next_dp_1[r_next] + dp[p][1][r1] * dp[i][0][r2]) % MOD;
                }
            }

            dp[p][0] = next_dp_0;
            dp[p][1] = next_dp_1;
        }

        long long total_subsets = (dp[0][0][0] + dp[0][1][0]) % MOD;
        
        long long ans = (total_subsets - 1 + MOD) % MOD;

        return ans;
    }
};