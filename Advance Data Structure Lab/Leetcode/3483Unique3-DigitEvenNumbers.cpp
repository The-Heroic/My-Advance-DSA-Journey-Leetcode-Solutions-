#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int n = digits.size();
        unordered_set<int> numSet;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                for (int k = 0; k < n; ++k) {
                    if (i != j && j != k && i != k) {
                        if (digits[i] != 0 && digits[k] % 2 == 0) {
                            int num = digits[i] * 100 + digits[j] * 10 + digits[k];
                            numSet.insert(num);
                        }
                    }
                }
            }
        }
    return numSet.size();
    }
};
int main(){

}