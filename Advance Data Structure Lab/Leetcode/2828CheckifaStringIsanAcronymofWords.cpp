#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        string acronym = "";
        for(int i =0; i<words.size(); i++){
            string str = words[i];
            acronym += str[0];
        }
        if(acronym == s){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){

}