#include <iostream>
#include <string>
#include <bitset>
#include <vector>
#include <algorithm>
#include <cmath>
#include <climits>
using namespace std;

class Solution {
public:
    vector<long long> distance(vector<int>& nums) {
        long long key;
        long long sum;
        vector<long long> dist;
        for(int i =0; i< nums.size();i++){
            if(nums[i]==i){
                key = nums[i];
            }
            for(int j = i+1; j<nums.size(); j++){
                if(nums[j]==key){
                    sum = i-j;
                }
            }
            dist.push_back(sum);
            sum=0;
        }
        return dist;
    }
};

int main(){

}