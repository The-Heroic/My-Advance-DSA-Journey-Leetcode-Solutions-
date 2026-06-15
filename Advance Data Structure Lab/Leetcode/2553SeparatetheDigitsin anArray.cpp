#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> digits;
        vector<int> digits2;
        for(int x : nums){
            while(x>0){
                int digit = x%10;
                digits2.push_back(digit);
                x = x/10; 
            }
        reverse(digits2.begin(), digits2.end());
        for(int i: digits2){
            digits.push_back(i);
        }
        digits2.clear();
        }
    return digits;
    }
};

int main(){

}