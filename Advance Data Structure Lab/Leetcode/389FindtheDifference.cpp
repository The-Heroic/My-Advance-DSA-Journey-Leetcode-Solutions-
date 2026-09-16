#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    char findTheDifference(string s, string t) {
        map<char, int> diffChar;
        map<char, int> oriStr;

        for(int i = 0; i<t.size(); i++){
            diffChar[t[i]]++;
        }

        
        for(int i = 0; i<s.size(); i++){
            oriStr[s[i]]++;
        }
        
        for (const auto& pair : diffChar) {
            if(pair.second != oriStr[pair.first]){
                return pair.first;
            }
    }
        return ' ';
    }
};

int main(){

}