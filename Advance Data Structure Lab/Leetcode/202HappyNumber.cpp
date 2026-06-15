#include <iostream>
#include <string>
#include <bitset>
#include <vector>
#include <algorithm>
#include <cmath>
#include <climits>
using namespace std;

class Solution {
public:
    bool isHappy(int num) {
        int sum =0;
        int digit =0;

        for(int i =0; i<=10; i++){
            
            while(num>0){
                digit = num%10;
                sum = sum + digit*digit;
                num = num/10;
            }
            if(sum==1){
                return true;
                break;
            }
            num = sum;
            sum = 0;
        }
        return false;
    }
};

int main(){
    int num = 2;

    Solution sol;
    bool value = sol.isHappy(num);
    cout<< boolalpha<<value;
}