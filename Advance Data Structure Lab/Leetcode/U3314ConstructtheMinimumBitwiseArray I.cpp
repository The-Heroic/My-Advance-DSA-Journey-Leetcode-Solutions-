#include <bits\stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;

        for (int i = 0; i < n; i++) {
            int p = nums[i];

            // 2 is the only even prime. x OR (x+1) is always odd for x >= 0.
            if (p == 2) {
                ans.push_back(-1);
                continue;
            }

            // Find the length of the trailing block of 1s
            int temp = p;
            int trailingOnes = 0;
            while (temp & 1) {
                trailingOnes++;
                temp >>= 1;
            }

            // To minimize ans[i], flip the most significant bit 
            // of the trailing block of 1s to 0.
            // This is done by XORing with (1 << (trailingOnes - 1))
            int result = p ^ (1 << (trailingOnes - 1));
            ans.push_back(result);
        }

        return ans;
    }
};

int main(){

}