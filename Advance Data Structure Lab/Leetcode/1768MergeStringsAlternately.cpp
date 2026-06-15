#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string word3 = word1 + word2;
        string final = "";
        int n = max(word1.size(), word2.size());

        for(int i= 0; i< n; i++){
            if(i<word1.size()){
                final = final + word1[i];
            
            }
            if(i<word2.size()){
                final = final + word2[i];
            }
        }
    return final;
    }
};

int main(){

}