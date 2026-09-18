#include<bits\stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_set<int> seen(nums.begin(), nums.end());
        vector<int> disNums;

        for (int i = 1; i <= nums.size(); ++i) {
            if (seen.find(i) == seen.end()) {
                disNums.push_back(i);
            }
        }

        return disNums;
    }
};

int main(){

}