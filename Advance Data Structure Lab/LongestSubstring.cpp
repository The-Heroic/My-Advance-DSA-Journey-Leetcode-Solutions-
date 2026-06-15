#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        string check;
        for(int i =0; i<s.length();i++){

            if(s.at(i) == s.at(i+1){
                check.at(0) = s.at(i+1);
            }
            else {
                check.push_back(s.at(i));
            }
        }
        return check.length();
    }
};

int main(){

}