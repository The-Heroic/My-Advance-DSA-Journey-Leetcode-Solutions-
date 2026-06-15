#include <bits\stdc++.h>
using namespace std;

class Solution {
private:
    // Helper function to calculate the waviness of a single number
    int getWaviness(int num) {
        string s = to_string(num);
        
        // Any number with fewer than 3 digits has a waviness of 0
        if (s.size() < 3) return 0;
        
        int wavinessCount = 0;
        
        // Start at index 1 and stop before the last index
        for (int i = 1; i < s.size() - 1; i++) {
            // Check if the digit is a Peak
            if (s[i] > s[i - 1] && s[i] > s[i + 1]) {
                wavinessCount++;
            }
            // Check if the digit is a Valley
            else if (s[i] < s[i - 1] && s[i] < s[i + 1]) {
                wavinessCount++;
            }
        }
        
        return wavinessCount;
    }

public:
    int totalWaviness(int num1, int num2) {
        int totalSum = 0;
        
        // Linearly scan through the inclusive range
        for (int i = num1; i <= num2; i++) {
            totalSum += getWaviness(i);
        }
        
        return totalSum;
    }
};

int main(){

}