#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int maxCandiesAllowed = candyType.size() / 2;
        unordered_set<int> uniqueCandyTypes(candyType.begin(), candyType.end());
        int uniqueTypesCount = uniqueCandyTypes.size();

        return min(uniqueTypesCount, maxCandiesAllowed);
    }
};



int main(){

}