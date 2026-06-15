#include <iostream>
#include <string>
#include <bitset>
#include <vector>
#include <algorithm>
#include <cmath>
#include <climits>
#include <unordered_map>
using namespace std;


class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxAr = 0;
        int left = 0;
        int right = height.size() - 1;

        while (left < right) {
            int width = right - left;

            int h = min(height[left], height[right]);

            int currentArea = width * h;
            maxAr = max(maxAr, currentArea);

            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }

        return maxAr;
    }
};

int main (){

}