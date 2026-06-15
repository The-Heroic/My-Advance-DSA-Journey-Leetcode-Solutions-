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

    bool isPrime(int n) {

    if (n <= 1) return false;
    if (n <= 3) return true;

    if (n % 2 == 0 || n % 3 == 0) return false;

        for (int i = 5; i * i <= n; i += 6) {
            if (n % i == 0 || n % (i + 2) == 0) {
                return false;
            }
        }
        return true;
    }

    int countPrimeSetBits(int left, int right) {
        int oneCount =0;
        int count =0;
        string binary;
        for(int i =left; i<=right;i++){
            binary = bitset<32>(i).to_string();
            for(int j =0; j<binary.size();j++){
                if(binary[j]=='1'){
                    oneCount++;
                }
            }
            if(isPrime(oneCount)== true){
                count++;
            }
            oneCount=0;
        }
    return count;
    }
};

int main(){

}