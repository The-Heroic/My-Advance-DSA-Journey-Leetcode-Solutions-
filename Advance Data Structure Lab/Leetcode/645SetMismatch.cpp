#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        vector<int> frequency(n + 1, 0);
        int duplicate = -1;
        int missing = -1;
        
        for (int num : nums) {
            frequency[num]++;
        }
        
        for (int i = 1; i <= n; i++) {
            if (frequency[i] == 2) {
                duplicate = i;
            } else if (frequency[i] == 0) {
                missing = i;
            }
        }
        
        return {duplicate, missing};
    }
};

int main(){

}