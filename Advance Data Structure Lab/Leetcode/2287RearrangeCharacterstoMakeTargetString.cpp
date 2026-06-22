#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    int maxNumberOfTargetWords(string text, string target) {
        // Fixed frequency arrays of size 26 initialized to 0
        vector<int> textCounts(26, 0);
        vector<int> targetCounts(26, 0);

        // 1. Count frequencies using direct index mapping (c - 'a')
        for (char c : text)   textCounts[c - 'a']++;
        for (char c : target) targetCounts[c - 'a']++;

        int maxInstances = INT_MAX;

        // 2. Loop through all 26 possible letters
        for (int i = 0; i < 26; i++) {
            // Only check letters that our target word actually needs
            if (targetCounts[i] > 0) {
                maxInstances = min(maxInstances, textCounts[i] / targetCounts[i]);
            }
        }

        return maxInstances;
    }
};

int main(){
    
}