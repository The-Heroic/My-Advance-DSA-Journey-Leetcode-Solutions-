#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        // Iterate through each character of the first string
        for (int i = 0; i < strs[0].length(); i++) {
            char c = strs[0][i]; // The character to check in other strings

            // Compare this character with the same position in all other strings
            for (int j = 1; j < strs.size(); j++) {
                // If we reach the end of a string or find a mismatch
                if (i == strs[j].length() || strs[j][i] != c) {
                    // Return the substring from the start up to the mismatch
                    return strs[0].substr(0, i);
                }
            }
        }

        // If we finish the loop, the entire first string is the prefix
        return strs[0];
    }
};

int main() {
    vector<string> strs = {"flower", "flow", "flight"};
    Solution obj;
    string result = obj.longestCommonPrefix(strs);
    
    cout << "Longest Common Prefix: \"" << result << "\"" << endl;
    
    return 0;
}