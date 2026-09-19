#include <bits\stdc++.h>
using namespace std;


class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        unordered_set<char> row1 = {'q','w','e','r','t','y','u','i','o','p'};
        unordered_set<char> row2 = {'a','s','d','f','g','h','j','k','l'};
        unordered_set<char> row3 = {'z','x','c','v','b','n','m'};
        
        vector<string> result;
        
        for (const string& word : words) {
            const unordered_set<char>* targetRow = nullptr;
            char firstChar = tolower(word[0]);
            
            if (row1.count(firstChar)) {
                targetRow = &row1;
            } else if (row2.count(firstChar)) {
                targetRow = &row2;
            } else {
                targetRow = &row3;
            }
            
            bool isValid = true;
            for (char ch : word) {
                if (targetRow->count(tolower(ch)) == 0) {
                    isValid = false;
                    break;
                }
            }
            
            if (isValid) {
                result.push_back(word);
            }
        }
        
        return result;
    }
};


int main(){

}

