#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    int countEven(int num) {
        int count = 0;
        for(int i = 1; i <= num ; i++){
            int digitSum =0;
            int digit = i;
            
            while(digit!=0){
                digitSum += digit % 10 ;
                digit = digit/10;
            }
            if(digitSum %2 ==0){
                count++;
            }
        }
    return count;
    }
};

int main(){

    int k ;
    cin>> k;

    Solution sol;

    cout<<sol.countEven(k);

}