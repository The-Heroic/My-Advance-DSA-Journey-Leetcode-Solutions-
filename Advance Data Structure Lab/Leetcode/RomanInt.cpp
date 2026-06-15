#include <iostream>
#include <string>

using namespace std;

class Solution {
    int getValue(char c) {
        switch (c) {
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
            default: return 0;
        }
    }

public:
    int romanToInt(string s) {
        int n = s.size();
        int total = getValue(s[n - 1]); 

        for (int i = n - 2; i >= 0; i--) {
            if (getValue(s[i]) < getValue(s[i + 1])) {
                total -= getValue(s[i]);
            } else {
                total += getValue(s[i]);
            }
        }
        return total;
    }
};