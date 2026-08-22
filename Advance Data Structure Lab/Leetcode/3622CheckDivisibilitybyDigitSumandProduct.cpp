#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0;
        int mul = 1;
        int num = n;

        while (num > 0) {
            int digit = num % 10;
            sum += digit;
            mul *= digit;
            num /= 10;
        }

        return n % (sum + mul) == 0;
    }
};

int main(){

}