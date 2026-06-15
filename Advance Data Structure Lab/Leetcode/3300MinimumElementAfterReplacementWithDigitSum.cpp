#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    int minElement(vector<int>& nums) {
        vector<int> sumOfNums;
        for(int x: nums){
            int sum=0;
            
            while(x!=0){
                int digit= x%10;
                x = x/10;
                sum = sum + digit;
            }
            sumOfNums.push_back(sum);

        }
        int minE = *min_element(sumOfNums.begin(), sumOfNums.end());
        return minE;
    }
};

int main(){

}