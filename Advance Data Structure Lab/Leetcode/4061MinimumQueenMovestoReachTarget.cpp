#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    int minQueenMoves(vector<int>& source, vector<int>& target) {
        int src= source[0];
        int sc = source[1];
        int tar = target[0];
        int tc = target[1];

        if(src == tar && sc == tc){
            return 0;
        }

        if(src == tar||sc==tc||abs(src-tar)==abs(sc-tc)){
            return 1;
        }

        return 2;
    }
};

int main(){

}