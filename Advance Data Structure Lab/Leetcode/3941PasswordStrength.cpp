#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    int passwordStrength(string password) {
        unordered_set<char> seen(password.begin(), password.end());
        int ans = 0;

        for (char c : seen) {
            if (c >= 'a' && c <= 'z') {
                ans += 1;
            } else if (c >= 'A' && c <= 'Z') {
                ans += 2;
            } else if (c >= '0' && c <= '9') {
                ans += 3;
            } else {
                ans += 5;
            }
        }

        return ans;
    }
};

int main(){

}
