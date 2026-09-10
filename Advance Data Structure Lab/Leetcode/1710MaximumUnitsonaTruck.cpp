#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        vector<int> dp(truckSize + 1, 0);
        
        for (const auto& box : boxTypes) {
            int count = box[0];
            int units = box[1];
            
            for (int k = 0; k < count; ++k) {
                for (int c = truckSize; c >= 1; --c) {
                    dp[c] = max(dp[c], dp[c - 1] + units);
                }
            }
        }
        
        return dp[truckSize];
    }
};
int main(){

}