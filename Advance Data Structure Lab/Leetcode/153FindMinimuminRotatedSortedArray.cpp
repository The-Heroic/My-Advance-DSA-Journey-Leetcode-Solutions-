#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
        int k = * min_element(nums.begin(), nums.end());
        return k;
    }
};

int main(){

}