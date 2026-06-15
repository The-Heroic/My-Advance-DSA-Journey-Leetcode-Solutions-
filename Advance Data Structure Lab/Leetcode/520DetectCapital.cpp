#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    bool detectCapitalUse(string word) {
        if(word.size() == 1){
            return true;
        }

        if(word.size()==2){
                if(islower(word[0]) && isupper(word[1])){
                    return false;
                }
                    return true;
            
        }
        else if(isupper(word[0]) && islower(word[1])){
            for(int i= 1 ; i< word.size(); i++){
                if(islower(word[i]) && isupper(word[0])){
                    continue;

                }
                else{
                    return false;
                }
            }
        }

        else if(isupper(word[0]) && isupper(word[1])){
            for(int i= 2 ; i< word.size(); i++){
                if(isupper(word[i]) && isupper(word[0])){
                    continue;

                }
                else{
                    return false;
                }
            }
        }

        else if(islower(word[0]) && islower(word[1])){
            for(int i= 2 ; i< word.size(); i++){
                if(islower(word[i]) && islower(word[0])){
                    continue;

                }
                else{
                    return false;
                }
            }
        }
        else{
            return false;
        }
        
        return true;
    }
};

int main(){

}