#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int>out;

        for(int x:nums){out[x]++;}
        int sum=0;
        for(auto const &x:out){if(x.second==1)sum+=x.first;}
        
    return sum;}
};

int main(){

}