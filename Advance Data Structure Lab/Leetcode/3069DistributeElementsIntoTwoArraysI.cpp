#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> nums1;
        vector<int> nums2;
        nums1.push_back(nums[0]);
        int prevIt =0;
        nums2.push_back(nums[1]);
        int prevIt2 = 0;
        for(int i =2; i<nums.size(); i++){
            if(nums1[prevIt]>nums[prevIt2]){
                nums1.push_back(nums[i]);
                prevIt++;
            }
            else{
                nums2.push_back(nums[i]);
                prevIt2++;
            }
        }

        vector<int> combined;
        combined.reserve(nums1.size() + nums2.size());

        combined.insert(combined.end(), nums1.begin(), nums1.end());
        combined.insert(combined.end(), nums2.begin(), nums2.end());

        return combined;
    }
};


int main(){

}