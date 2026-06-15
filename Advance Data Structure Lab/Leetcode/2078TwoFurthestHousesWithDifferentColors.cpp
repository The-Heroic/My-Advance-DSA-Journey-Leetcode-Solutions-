#include <iostream>
#include <string>
#include <bitset>
#include <vector>
#include <algorithm>
#include <cmath>
#include <climits>
using namespace std;

class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n = colors.size();
        int start = 0;
        int end = n - 1;
        int maxD = 0;

        while (colors[start] == colors[end]) {
            end--;
        }
        maxD = end - start;

        start = 0;
        end = n - 1;
        while (colors[end] == colors[start]) {
            start++;
        }
        
        maxD = max(maxD, end - start);

        return maxD;
    }
};


int main(){

}