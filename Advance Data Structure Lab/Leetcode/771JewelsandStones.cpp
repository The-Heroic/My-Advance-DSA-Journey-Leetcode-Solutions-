#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char, int> stonesAsJewels;
        int count=0;

        for(char ch: stones){
            stonesAsJewels[ch]++;
        }

        for(int i = 0; i< jewels.length();i++){
            if(stonesAsJewels[jewels[i]]){
                count += stonesAsJewels[jewels[i]];
            }
        }

        return count;
    }
};

int main (){

}