#include <iostream>
#include <string>
#include <bitset>
#include <vector>
#include <algorithm>
#include <cmath>
#include <climits>
#include <unordered_map>
#include <bits\stdc++.h>
using namespace std;



class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        // Use long long to prevent overflow during bit negation
        long long combinedXor = 0;
        for (int n : nums) combinedXor ^= n;

        // Isolate the rightmost set bit
        long long mask = combinedXor & -combinedXor;

        int a = 0, b = 0;
        for (int n : nums) {
            if (n & mask) {
                a ^= n; // Group with the bit set
            } else {
                b ^= n; // Group with the bit not set
            }
        }

        return {a, b};
    }
};

int main(){

}