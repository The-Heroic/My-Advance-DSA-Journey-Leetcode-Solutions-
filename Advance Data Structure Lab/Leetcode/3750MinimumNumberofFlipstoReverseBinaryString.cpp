#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    int minimumFlips(int n) {
        string str2 = "";
        
        while (n > 0) {
            str2 += (n % 2 == 0) ? '0' : '1';
            n /= 2;
        }
        reverse(str2.begin(), str2.end());

        string str = str2;
        reverse(str.begin(), str.end());

        int numOfFlips = 0;

        for (int i = 0; i < str.size(); i++) {
            if (str[i] != str2[i]) {
                numOfFlips++;
            }
        }

        return numOfFlips;
    }
};

int main(){


}