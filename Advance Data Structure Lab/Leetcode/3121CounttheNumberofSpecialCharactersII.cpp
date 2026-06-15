#include <bits\stdc++.h>
using namespace std;


class Solution {
public:
    int numberOfSpecialChars(string word) {
        int n = word.size();
        
        // Initialize with -1 to mean "not seen yet"
        vector<int> lastLower(26, -1);
        vector<int> firstUpper(26, -1);
        
        // Mark the indices in a single pass
        for (int i = 0; i < n; i++) {
            char c = word[i];
            
            if (islower(c)) {
                // Keep updating so it always holds the LAST seen index
                lastLower[c - 'a'] = i;
            } 
            else if (isupper(c)) {
                // Only record the FIRST time we see it; don't overwrite
                if (firstUpper[c - 'A'] == -1) {
                    firstUpper[c - 'A'] = i;
                }
            }
        }
        
        int specialCount = 0;
        
        // Evaluate the rules for all 26 letters
        for (int i = 0; i < 26; i++) {
            // Rule 1: Lowercase must exist (not -1)
            // Rule 2: Uppercase must exist (not -1)
            // Rule 3: The last lowercase position must be BEFORE the first uppercase position
            if (lastLower[i] != -1 && firstUpper[i] != -1 && lastLower[i] < firstUpper[i]) {
                specialCount++;
            }
        }
        
        return specialCount;
    }
};


int main(){

}