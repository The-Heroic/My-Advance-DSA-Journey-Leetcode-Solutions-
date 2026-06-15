#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> sortedHeight = heights;
        sort(sortedHeight.begin(), sortedHeight.end());
        int count=0;
        for(int i=0;i<heights.size();i++){
            if(heights[i]!=sortedHeight[i]){
                count++;
            }
        }
    return count;
    }
};

int main() {

}