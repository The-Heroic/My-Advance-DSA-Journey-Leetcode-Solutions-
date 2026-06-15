#include <iostream>
#include <string>
#include <bitset>
#include <vector>
#include <algorithm>
#include <cmath>
#include <climits>
using namespace std;

class Solution {
public:
    bool hasAlternatingBits(int n) {
        string binary = bitset<32>(n).to_string();
        
        size_t firstOne = binary.find('1');
        
        if (firstOne == string::npos) return true;

        for (int i = firstOne; i < binary.size() - 1; i++) {
            if (binary[i] == binary[i + 1]) {
                return false; // Found two the same!
            }
        }
        
        return true;
    }
};

int main(){
    int nums;
    cin>>nums;
    Solution sol;
    cout<<sol.hasAlternatingBits(nums);
}