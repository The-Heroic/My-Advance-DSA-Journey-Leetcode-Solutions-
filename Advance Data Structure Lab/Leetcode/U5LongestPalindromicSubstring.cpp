#include <string>
#include <algorithm>

using namespace std;

class Solution {
private:
    // Helper function to expand outward from a given center
    int expandAroundCenter(const string& s, int left, int right) {
        while (left >= 0 && right < s.length() && s[left] == s[right]) {
            left--;
            right++;
        }
        // Returns the length of the found palindrome
        return right - left - 1;
    }

public:
    string longestPalindrome(string s) {
        if (s.empty()) return "";
        
        int start = 0;
        int max_len = 0;

        for (int i = 0; i < s.length(); i++) {
            // Case 1: Odd length palindromes (center is at i)
            int len1 = expandAroundCenter(s, i, i);
            
            // Case 2: Even length palindromes (center is between i and i+1)
            int len2 = expandAroundCenter(s, i, i + 1);

            int len = max(len1, len2);
            
            // Update the boundaries of our longest palindromic substring
            if (len > max_len) {
                max_len = len;
                start = i - (len - 1) / 2;
            }
        }

        return s.substr(start, max_len);
    }
};