#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    string reverseParentheses(string s) {
        vector<int> brackets;
        string result = "";

        for (char ch : s) {
            if (ch == '(') {
                brackets.push_back(result.size());
            } else if (ch == ')') {
                int start = brackets.back();
                brackets.pop_back();
                reverse(result.begin() + start, result.end());
            } else {
                result += ch;
            }
        }

        return result;
    }
};


int main(){

}