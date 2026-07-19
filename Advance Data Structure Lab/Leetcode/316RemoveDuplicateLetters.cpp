#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int> lastSeenAt(26, 0);
        for (int i = 0; i < s.length(); i++) {
            lastSeenAt[s[i] - 'a'] = i;
        }

        vector<bool> alreadyAdded(26, false);
        string finalResult = "";

        for (int i = 0; i < s.length(); i++) {
            char currentLetter = s[i];

            if (alreadyAdded[currentLetter - 'a']) {
                continue;
            }

           while (!finalResult.empty() && finalResult.back() > currentLetter && lastSeenAt[finalResult.back() - 'a'] > i) {
                alreadyAdded[finalResult.back() - 'a'] = false;
                finalResult.pop_back();
            }

            finalResult.push_back(currentLetter);
            alreadyAdded[currentLetter - 'a'] = true;
        }

        return finalResult;
    }
};

int main(){


}