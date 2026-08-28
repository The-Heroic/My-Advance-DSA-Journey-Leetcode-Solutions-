#include <bits\stdc++.h>
using namespace std;


class Solution {
public:
    bool wordPattern(string pattern, string s) {
        stringstream ss(s);
        string word;
        vector<string> words;

        while (ss >> word) {
            words.push_back(word);
        }

        if (pattern.length() != words.size()) {
            return false;
        }

        unordered_map<char, string> alphabetMap;
        unordered_set<string> seenWords; // Ensures 1-to-1 bijection
        int i = 0;

        for (char x : pattern) {
            string currentWord = words[i++];

            if (alphabetMap.count(x)) {
                // Character seen before: must map to the same word
                if (alphabetMap[x] != currentWord) {
                    return false;
                }
            } else {
                // Character is new: word must NOT already be mapped to another char
                if (seenWords.count(currentWord)) {
                    return false;
                }
                alphabetMap[x] = currentWord;
                seenWords.insert(currentWord);
            }
        }   

        return true;
    }
};

int main(){

}