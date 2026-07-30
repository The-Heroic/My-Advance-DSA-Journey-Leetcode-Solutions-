#include <iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount + 1, amount + 1);

        dp[0] = 0;

        for (int i = 1; i <= amount; i++) {
            for (int coin : coins) {
                if (i - coin >= 0) {
                    dp[i] = min(dp[i], 1 + dp[i - coin]);
                }
            }
        }

        if (dp[amount] > amount) {
            return -1;
        }

        return dp[amount];
    }
};

int main(){
    
    Solution sol;

    vector<int> coins1 = {1, 2, 5};
    int amount1 = 11;
    cout << "Minimum coins needed for amount " << amount1 << ": " 
            << sol.coinChange(coins1, amount1) << endl;
}