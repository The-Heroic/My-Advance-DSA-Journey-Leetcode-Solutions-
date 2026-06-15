#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    int getSum(int a, int b) {
        while (b != 0) {
            int answerWithoutCarry = a ^ b;
            int carry = (unsigned int)(a & b) << 1;
            a = answerWithoutCarry;
            b = carry;
        } 
    return a;
    }
    };
    

int main(){

}