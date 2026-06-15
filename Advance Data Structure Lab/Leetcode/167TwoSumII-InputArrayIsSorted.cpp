#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> pair;
        int left = 0;
        int right = numbers.size()-1;

        while(right>left){
            int sum = numbers[right]+ numbers[left];
            if(sum == target){
                pair.push_back(left+1);
                pair.push_back(right+1);
                return pair;
            }
            else if(sum< target){
                left++;
            }
            else{
                right--;
            }
        }
        return pair;
    }
};

int main(){

}