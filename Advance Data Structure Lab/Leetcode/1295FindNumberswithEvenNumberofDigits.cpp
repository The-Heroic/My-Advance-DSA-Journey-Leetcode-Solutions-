#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int intCount =0;
        for(int x: nums){
            int count =0;
            while(x!=0){
                x= x/10;
                count++;
            }
            if(count %2 ==0){
                intCount++;
            }
        }
    return intCount;
    }
};

int main(){

}