#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    string reverseByType(string s) {
        int n = s.length();

        // Pass 1: Reverse only the lowercase letters
        int left = 0;
        int right = n - 1;
        while (left < right) {
            if (!(s[left] >= 'a' && s[left] <= 'z')) {
                left++;
            } else if (!(s[right] >= 'a' && s[right] <= 'z')) {
                right--;
            } else {
                swap(s[left], s[right]);
                left++;
                right--;
            }
        }

        // Pass 2: Reverse only the special characters
        left = 0;
        right = n - 1;
        while (left < right) {
            if (s[left] >= 'a' && s[left] <= 'z') {
                left++;
            } else if (s[right] >= 'a' && s[right] <= 'z') {
                right--;
            } else {
                swap(s[left], s[right]);
                left++;
                right--;
            }
        }

        return s;
    }
};

int main(){

}