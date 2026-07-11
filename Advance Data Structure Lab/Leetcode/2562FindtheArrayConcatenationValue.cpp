#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        long long concVal = 0;
        int left = 0;
        int right = nums.size() - 1;

        while (left <= right) {
            if (left == right) {
                concVal += nums[left];
                break;
            
            }
            else {
                string combined = to_string(nums[left]) + to_string(nums[right]);
                
                concVal += stoll(combined);
                
                left++;
                right--;
            }
        }

        return concVal;
    }
};

int main(){

}