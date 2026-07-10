#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    string makeSmallestPalindrome(string s) {
        int left = 0;
        int right = s.length() - 1;

        while (left < right) {
            if (s[left] != s[right]) {
                char smallC = min(s[left], s[right]);
                
                s[left] = smallC;
                s[right] = smallC;
            }
            left++;
            right--;
        }

        return s;
    }
};

int main(){

}