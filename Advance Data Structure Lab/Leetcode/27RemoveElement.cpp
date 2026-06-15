#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
            int k=0;
            for(int i; i<nums.size();i++){
                if(nums[i] != val){
                    nums[k] = nums[i];
                    k++;
                }
            }
    return k;
    }
};

int main(){
    vector<int>numbers = {3, 2, 2, 3,};
    int value = 3;

    Solution sol;
    cout<<sol.removeElement(numbers, value);

return 0;

}
