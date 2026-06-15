#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        
    }
};



class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        
        for(int i=0;i<nums.size();i++){
            int temp=nums[i];

            if(nums[i]==i && nums[i]<10) return i;
            int sum=0;
            
            while(temp>0){
                sum+=temp%10;
                temp/=10;
            }
            if(sum==i)return i;
        }
    return -1;}
};
int main(){


}