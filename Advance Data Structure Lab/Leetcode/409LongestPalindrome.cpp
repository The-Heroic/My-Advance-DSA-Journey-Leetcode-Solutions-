#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> characters;

        for (char x : s) {
            characters[x]++;
        }
        
        int count = 0;
        bool hasOdd = false;

        for (auto m : characters) {
            if (m.second % 2 == 0) {
                count += m.second;
            } else {
                count += m.second - 1;
                hasOdd = true;
            }
        }

        if (hasOdd) {
            count++;
        }

        return count;
    }
};

int main(){

}