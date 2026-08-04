#include <bits\stdc++.h>
using namespace std;

class Solution {
public:

    int minimumPushesforsizelessthan8(string word){
        int i = word.size()%8;
        int keyPresses = 0;
        for(int j=1; j<=i; j++){
            keyPresses+=1;
        }
        return keyPresses;
    }

    int minimumPushes(string word) {
        int i= word.size()/8;
        int residualWords = word.size()%8;
        int keyPress = 0;
        int m =1;
        if((residualWords > 0)&&(i==0)){
            return minimumPushesforsizelessthan8(word);
        }
        else{
            for(int j=1; j<=i;j++){
                keyPress+=8*m;
                m++;
            }
            keyPress= keyPress + residualWords*m;
        }

        return keyPress;
    }
};


class Solution1 {
public:
    int minimumPushes(string word) {
        int n = word.size();
        int i = n / 8;
        int residualWords = n % 8;

        int keyPress = 4 * i * (i + 1) + residualWords * (i + 1);

        return keyPress;
    }
};
int main(){

}