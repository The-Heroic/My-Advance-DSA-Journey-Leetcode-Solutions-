#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        vector<int> decoded;

        int c = code.size();
        int diff =0;
        if(k<0){
            int diff = c + k;
        }


        for(int i=0;i<c; i++){
            int left =i;
            int right =0;
            int sum=0;
            int count =0;

            if(k<0){
                right =(i + diff);
                while(count != abs(k)){
                    sum = sum + code[right];
                right++;
                count++;
                    if((right >= c) && (count != abs(k))){
                        right=0;
                    }
                }
            decoded.push_back(sum);
            sum=0;
            
            }

            else if(k==0){
                
                decoded.push_back(0);
            
            }

            else{
                right = i+1;
                while(count != k){
                    if(count==k){
                        break;
                    }
                    sum = sum + code[right];
                    right++;
                    count++;
                        if((right >= c) && (count != abs(k))){
                            right=0;
                        }
                    }

            decoded.push_back(sum);
            sum=0;
            }
    
        }
    return decoded;
    }
};



class Solution1 {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        vector<int> decoded;
        int c = code.size();
        
        int diff = 0;
        if (k < 0) {
            diff = c + k;
        }

        for (int i = 0; i < c; i++) {
            int sum = 0;
            int count = 0;

            if (k < 0) {
                int right = (i + diff) % c;
                while (count != abs(k)) {
                    sum = sum + code[right];
                    right++;
                    count++;
                    if (right >= c) {
                        right = 0;
                    }
                }
                decoded.push_back(sum);
            } 
            else if (k == 0) {
                decoded.push_back(0);
            } 
            else {
                int right = (i + 1) % c;
                while (count != k) {
                    sum = sum + code[right];
                    right++;
                    count++;
                    if (right >= c) {
                        right = 0;
                    }
                }
                decoded.push_back(sum);
            }
        }
        return decoded;
    }
};




class Solution2 {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        vector<int> result(n, 0);
        if (k == 0) return result;

        // 1. Define the initial window bounds
        int start = (k > 0) ? 1 : n + k;
        int end = (k > 0) ? k : n - 1;
        
        long long currentSum = 0;
        // 2. Sum the first window
        for (int i = start; i <= end; i++) {
            currentSum += code[i];
        }

        // 3. Slide the window for each element
        for (int i = 0; i < n; i++) {
            result[i] = (int)currentSum;
            // Subtract the element leaving the window
            currentSum -= code[start % n];
            // Add the new element entering the window
            currentSum += code[(end + 1) % n];
            
            start++;
            end++;
        }

        return result;
    }
};

int main(){
    vector<int> code = {2,4,9,3};
    int k = -2;

    Solution sol;
    vector<int> decode = sol.decrypt(code, k);

    for(int x: decode){
        cout<< x<< " ";
    }
    
}