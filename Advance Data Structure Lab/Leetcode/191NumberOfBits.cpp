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
    int hammingWeight(int n) {
        string binary = bitset<32>(n).to_string();
        int countbit =0;
        for(int i =0; i<binary.size(); i++){
            if(binary[i]=='1'){
                countbit++;
            }
        }

    return countbit;
    }
};

int main(){
    int num ;
    cin>>num;

    Solution sol;
    cout<<sol.hammingWeight(num);
}