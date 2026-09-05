#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        auto l =nums.begin() + 1;
        auto m = nums.begin();
        for(int i =0; i<nums.size(); i++){
            int maxNum = *max_element(nums.begin(), l);
            int minNum = *min_element(m, nums.end());
            
            if((maxNum -minNum) <= k){
                return i;
            }
            l++;
            m++;
        }
    return -1;
    }
};

int main(){

}