#include <iostream>
#include <cmath> // Required for log10()

using namespace std;

class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n <= 0) return false;
        
        // Calculate log base 3 of n
        double res = log10(n) / log10(3);
        
        // Check if the result is an integer
        // We check if (res - floor(res)) is exactly 0
        return fmod(res, 1) == 0;
    }
};

int main() {
    Solution sol;
    cout << boolalpha << sol.isPowerOfThree(27) << endl; // true
    cout << boolalpha << sol.isPowerOfThree(45) << endl; // false
    return 0;
}