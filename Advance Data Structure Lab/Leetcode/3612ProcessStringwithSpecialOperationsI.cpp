#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    string processStr(string s) {
        string result = "";

        for (char i : s) {
            if (i >= 'a' && i <= 'z') {
                result.push_back(i); 
            }
            else if (i == '*') {
                if (!result.empty()) {
                    result.pop_back();
                }
            }
            else if (i == '#') {
                result += result;
            }
            else if (i == '%') {
                reverse(result.begin(), result.end());
            }
        }

        return result;
    }
};


int main(){
    
}