#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> alphabetCount;
        for(char x:magazine){
            alphabetCount[x]++;
        }

        for(char x: ransomNote){
            alphabetCount[x]--;
            if(alphabetCount[x]<=-1){
                return false;
            }
        }

        return true;
    }
};

int main(){

}