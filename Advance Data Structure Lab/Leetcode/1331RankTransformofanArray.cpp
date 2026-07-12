#include <bits\stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> sortedArray = arr;
        sort(sortedArray.begin(), sortedArray.end());

        unordered_map<int, int> elementRank;
        int rankVal = 1;

        for(int num : sortedArray){
            if(elementRank.find(num) == elementRank.end()){
                elementRank[num] = rankVal;
                rankVal++;
            }
        }

        for(int i = 0; i < arr.size(); i++){
            arr[i] = elementRank[arr[i]];
        }

        return arr;
    }
};

int main(){
    
}