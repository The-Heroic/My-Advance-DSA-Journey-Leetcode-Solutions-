#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    int firstMatchingIndex(string s) {

        int n= s.size();
        int i =0;
        while(i<=s.size()){
            if(s[i] == s[n - i - 1]){
                return i;
            }
        i++;
        }
    }
};

int main(){

}