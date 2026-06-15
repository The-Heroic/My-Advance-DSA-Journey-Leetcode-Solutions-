#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();

        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++; 
                return digits; 
            }
            else{
                digits[i] = 0;
            }
        }

        digits.insert(digits.begin(), 1);
        
        return digits;
    }
};

int main(){
    vector<int> digits = {9,9,9};
    Solution obj;
    vector<int> result = obj.plusOne(digits);
    
    for(int d: result){
        cout<< d<< " ";
    }
    return 0;
}