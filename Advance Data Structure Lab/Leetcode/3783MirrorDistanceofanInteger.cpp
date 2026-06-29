#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    int mirrorDistance(int n) {
        string str = to_string(n);

        reverse(str.begin(), str.end());

        int num = stoi(str);

        int fnum = abs(n- num);

        return fnum;
    }
};

int main(){

}