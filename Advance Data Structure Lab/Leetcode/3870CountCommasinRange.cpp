#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    int countCommas(int n) {
        int totalCommas = 0;

        for (int currentVal = 1; currentVal <= n; currentVal++) {
            string strVal = to_string(currentVal);
            totalCommas += (strVal.length() - 1) / 3;
        }

        return totalCommas;
    }
};
int main(){
    
}