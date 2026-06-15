#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int, int> counts;
        
        for (int num : nums) {
            // Increment the frequency of the current number
            counts[num]++;
            
            // If the count is greater than 1, we found our repeated element
            if (counts[num] > 1) {
                return num;
            }
        }
        
        return -1; // Fallback, though constraints guarantee an answer
    }
};

int main(){

}