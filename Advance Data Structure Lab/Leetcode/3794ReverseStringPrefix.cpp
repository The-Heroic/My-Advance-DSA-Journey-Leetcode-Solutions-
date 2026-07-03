#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    string reversePrefix(string s, int k) {
        string str = s;

        reverse(str.begin() , str.begin() + k);

        return str;
        
    }
};

int main(){

}