#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();
        for(int i = 0; i<n; i++){
        int k = nums[i];
            if(n % (i+1)==0){
                sum = sum + (k*k);
            }
        }
    return sum;
    }
};

int main(){

}