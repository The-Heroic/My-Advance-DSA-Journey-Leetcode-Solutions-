#include <bits\stdc++.h>
using namespace std;


class Solution1 {
public:
    int evalRPN(vector<string>& tokens) {
        // 1. Performance Hack: Unsync C++ from C for faster testing
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        stack<long long> st;
        for (const string& s : tokens) {
            // 2. Concise Number Check:
            // If length > 1 (like "-11") or first char is a digit, it's a number.
            if (s.size() > 1 || isdigit(s[0])) {
                st.push(stoll(s));
            } else {
                // 3. In-place Operation: No need for a separate 'result' function
                long long b = st.top(); st.pop();
                long long a = st.top(); st.pop();
                
                if (s == "+") st.push(a + b);
                else if (s == "-") st.push(a - b);
                else if (s == "*") st.push(a * b);
                else st.push(a / b); // Division
            }
        }
        return (int)st.top();
    }
};


class Solution {
public:

    bool isNumber(string s) {
        if (s.empty()) return false;
        // Check for negative numbers: "-" followed by a digit
        if (s[0] == '-' && s.length() > 1 && isdigit(s[1])) return true;
        // Otherwise, just check if the first character is a digit
        return isdigit(s[0]);
    }

    bool isOperator(string s) {
        return (s == "+" || s == "-" || s == "*" || s == "/" || s == "^");
    }
    
    
    long long result (long long b, long long a, string s){
        if(s =="+"){
            return a+b;
        }
        if(s =="-"){
            return a-b;
        }
        if(s =="*"){
            return a*b;
        }
        if(s =="/"){
            return a/b;
        }
    return 0;
    }

    int evalRPN(vector<string>& tokens) {
        long long finalR;
        stack<long long> s;
        for(int i =0;i<tokens.size();i++){
            if (isNumber(tokens[i])) {
                s.push(stoll(tokens[i])); // Convert string to int and push
            } else if (isOperator(tokens[i])) {
                long long b = s.top();
                s.pop();
                long long a = s.top();
                s.pop();
                finalR = result(b, a, tokens[i]);
                s.push(finalR);
                
            } 
        }
    return (int)s.top();
    }
};

int main(){

}