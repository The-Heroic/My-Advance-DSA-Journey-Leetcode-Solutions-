#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char minchar = letters[0];
        for(int i = 0; i<letters.size(); i++ ){
            if(letters[i]> target){
                minchar = letters[i];
                return minchar;
            }
            else{
                minchar= letters[0];
                
            }
        }
    return minchar;
    }
};

int main(){

}