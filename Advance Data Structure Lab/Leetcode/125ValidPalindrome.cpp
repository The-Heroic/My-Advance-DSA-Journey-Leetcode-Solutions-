#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <climits>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
        string filteredStr = "";

        for (char c : s) {
            if (isalnum(c)) {
                filteredStr += tolower(c);
            }
        }

        string reversedStr = filteredStr;
        reverse(reversedStr.begin(), reversedStr.end());

        return filteredStr == reversedStr;
    }
};

int main(){
    

}