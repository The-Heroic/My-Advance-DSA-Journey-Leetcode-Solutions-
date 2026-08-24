#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    bool sumGame(string num) {
        int n = num.size();
        int mid = n / 2;

        int leftSum = 0;
        int rightSum = 0;
        int leftQ = 0;
        int rightQ = 0;

        for (int i = 0; i < mid; i++) {
            if (num[i] == '?') {
                leftQ++;
            } else {
                leftSum += (num[i] - '0');
            }
        }

        for (int i = mid; i < n; i++) {
            if (num[i] == '?') {
                rightQ++;
            } else {
                rightSum += (num[i] - '0');
            }
        }

        if (leftQ == 0 && rightQ == 0) {
            return leftSum != rightSum; 
        }

            if ((leftQ + rightQ) % 2 != 0) {
            return true;
        }

        int diffSum = leftSum - rightSum;
        int diffQ = rightQ - leftQ;

        if (2 * diffSum == 9 * diffQ) {
            return false; 
        }

        return true;
    }
};

int main(){

}