#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    bool rotateString(string s, string goal) {
        int result = s.compare(goal);
        
        for(int i =0; i<s.length(); i++){
            if(result!=0){
                swap(s[0], s[s.length()-1]);
            }
            else{
                return true;
            }
        }
    return false;
    }
};



class Solution1 {
public:
    bool rotateString(string s, string goal) {
        if (s.length() != goal.length()) {
            return false;
        }

        string doubled = s + s;

        return doubled.find(goal) != string::npos;
    }
};

int main (){

}