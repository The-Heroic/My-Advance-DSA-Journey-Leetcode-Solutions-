#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    string simplifyPath(string path) {
        vector<string> st;
        string temp = "";
        int n = path.length();

        for (int i = 0; i < n; i++) {
            if (path[i] == '/') {
                if (temp == "..") {
                    if (!st.empty()) {
                        st.pop_back();
                    }
                } else if (temp != "" && temp != ".") {
                    st.push_back(temp);
                }
                temp = ""; 
            } else {
                temp += path[i];
            }
        }

        
        if (temp == "..") {
            if (!st.empty()) {
                st.pop_back();
            }
        } else if (temp != "" && temp != ".") {
            st.push_back(temp);
        }

       
        string ans = "";
        for (string dir : st) {
            ans += "/" + dir;
        }

        if (ans == "") {
            return "/";
        }

        return ans;
    }
};

int main(){

}