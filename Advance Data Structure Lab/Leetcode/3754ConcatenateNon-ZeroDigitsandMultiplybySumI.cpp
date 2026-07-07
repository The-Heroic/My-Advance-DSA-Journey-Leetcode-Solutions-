#include <bits\stdc++.h>
using namespace std;


class Solution {
public:
    long long sumAndMultiply(int n) {
        if(n==0){
            return 0;
        }
        string str = to_string(n);

        str.erase(remove(str.begin(), str.end(), '0'), str.end());
        long long newNum = stoi(str);
        long long indiNum = newNum;
        int digit = 0;
        int digitSum = 0;


        while(indiNum!=0){
            digit = indiNum%10;
            indiNum = indiNum/10;
            digitSum = digit + digitSum;
        }

        long long finalNum = digitSum * newNum;

        return finalNum;
    }
};

int main(){

}