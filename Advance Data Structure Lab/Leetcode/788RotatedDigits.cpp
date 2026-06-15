#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    int rotatedDigits(int n) {
        int count=0;
        for(int i = 0; i< n; i++){
            int num = i;
            int digit=0;
            
            while(num>0){
                digit = num% 10;

                if(digit != 0 && digit != 1 && digit != 8 && digit != 3 && digit != 4 && digit != 7){
                    count++;
                }

                num = num/10;

            }
        }
    return count;
    }
};

class Solution1 {
public:
    int rotatedDigits(int n) {
        int totalCount = 0;
        
        // Loop from 1 to n (inclusive)
        for (int i = 1; i <= n; i++) {
            int num = i;
            bool isInvalid = false;
            bool hasDiff = false;

            while (num > 0) {
                int digit = num % 10;
                
                // Rule 1: These digits make the whole number invalid
                if (digit == 3 || digit == 4 || digit == 7) {
                    isInvalid = true;
                    break;
                }
                // Rule 2: These digits change the value when rotated (2->5, 5->2, 6->9, 9->6)
                if (digit == 2 || digit == 5 || digit == 6 || digit == 9) {
                    hasDiff = true;
                }
                
                num /= 10; // Correctly move to the next digit
            }

            // A number is "good" if it has NO invalid digits AND AT LEAST ONE rotating digit
            if (!isInvalid && hasDiff) {
                totalCount++;
            }
        }
        return totalCount;
    }
};


int main(){

    int n;
    cin>>n;

    Solution sol;
    cout<<sol.rotatedDigits(n);
}