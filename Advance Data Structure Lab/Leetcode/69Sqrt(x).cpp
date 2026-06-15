using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        // Base cases: 0 and 1
        if (x < 2) return x;

        int low = 1;
        int high = x;
        int ans = 0;

        while (low <= high) {
            // Using long long for mid to prevent overflow when squaring
            long long mid = low + (high - low) / 2;
            long long square = mid * mid;

            if (square == x) {
                return mid; // Perfect square found
            } 
            else if (square < x) {
                ans = mid;    // Record the floor value
                low = mid + 1; // Look for a bigger candidate
            } 
            else {
                high = mid - 1; // Too high, look lower
            }
        }
        
        return ans;
    }
};