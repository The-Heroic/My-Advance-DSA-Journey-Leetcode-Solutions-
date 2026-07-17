#include <bits\stdc++.h>
using namespace std;

//TLE solution but with a starter approach
// class Solution {
// public:                                                  
//     int findKthLargest(vector<int>& nums, int k) {
//         int i = 1;
//         while(i != k){
//             auto maxEle = max_element(nums.begin(), nums.end());
//             if (maxEle != nums.end()) { 
//                 swap(*maxEle, nums.back());
//                 nums.pop_back();
//             }
//             i++;
//         }

//         int Final_ele = *max_element(nums.begin(), nums.end());

//         return Final_ele;
//     }
// };


// solving with sorting
// class Solution {
// public:
//     int findKthLargest(vector<int>& nums, int k) {
//         sort(nums.begin(), nums.end(), greater<int>());
        
//         int finalEle = nums[k - 1];
        
//         return finalEle;
//     }
// };


// solving without sorting
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        multiset<int> valuesSet;

        for(int num : nums){
            valuesSet.insert(num);
            if(valuesSet.size() > k){
                valuesSet.erase(valuesSet.begin());
            }
        }

        int finalEle = *valuesSet.begin();

        return finalEle;
    }
};

int main(){

}