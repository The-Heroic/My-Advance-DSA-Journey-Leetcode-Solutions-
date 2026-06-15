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
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> counts;
        
        int n = nums.size();

        for(int value : nums){
            counts[value]++;

            if (counts[value]> n/2){
                return value;
            }
        }
    return -1;
    }
};

int main(){

}