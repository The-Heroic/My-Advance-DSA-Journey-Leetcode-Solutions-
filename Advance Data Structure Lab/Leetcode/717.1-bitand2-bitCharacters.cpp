#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int n = bits.size();
        int countOnes = 0;

        int i = n - 2;
        while (i >= 0 && bits[i] == 1) {
            countOnes++;
            i--;
        }

        return countOnes % 2 == 0;
    }
};


int main(){

}