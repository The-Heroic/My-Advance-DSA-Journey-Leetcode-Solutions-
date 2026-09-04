#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> charTimes;
        int count;

        for(char x: s){
            charTimes[x]++;
        }

        for(int x; x<s.size(); x++){
            if(charTimes[s[x]]==1){
                return x;
            }
        }
        return -1;
    }
};

int main(){}