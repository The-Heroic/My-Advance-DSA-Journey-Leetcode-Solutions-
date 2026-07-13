#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    int captureForts(vector<int>& forts) {
        int maxForts = 0;
        int lastIndex = -1;

        for(int i = 0; i < forts.size(); i++){
            if(forts[i] != 0){
                if(lastIndex != -1 && forts[i] != forts[lastIndex]){
                    maxForts = max(maxForts, i - lastIndex - 1);
                }
                lastIndex = i;
            }
        }

        return maxForts;
    }
};


int main(){

}