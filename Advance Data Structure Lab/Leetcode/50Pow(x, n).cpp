#include <iostream>
#include <string>
#include <bitset>
#include <vector>
#include <algorithm>
#include <cmath>
#include <climits>
#include <unordered_map>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        double result =1;
        int power = abs(n);
        for(int i=1;i<=power;i++){
            if(n<0){
                result= result * (1/x);
            }else{
                result*=x;
            }
        }
    return result;
    }
};

class Solution1 {
public:
    double myPow(double x, int n) {
        // 1. Use long long to handle the INT_MIN overflow safely
        long long N = n;
        
        // 2. Handle negative powers
        if (N < 0) {
            x = 1 / x;
            N = -N;
        }
        
        double result = 1.0;
        double current_product = x;

        // 3. Binary Exponentiation (O(log N))
        while (N > 0) {
            // If N is odd, multiply result by the current power of x
            if (N % 2 == 1) {
                result *= current_product;
            }
            // Square the base
            current_product *= current_product;
            // Divide the power by 2
            N /= 2;
        }
        
        return result;
    }
};
int main(){

}