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
    bool isIsomorphic(string s, string t) {
        vector<int> sn(256, 0);
        vector<int> tn(256, 0);

        if(s.size() != t.size()){
            return false;
        }

        for(int i = 0; i < s.size(); i++){
            char c = s[i];
            char d = t[i];

            if(sn[c] != tn[d]){
                return false;
            }

            sn[c] = i + 1;
            tn[d] = i + 1;
        }
        
        return true;
    }
};

int main(){
    string string1 = "f11";
    string string2 = "add";
    cout<<string2[1];
}